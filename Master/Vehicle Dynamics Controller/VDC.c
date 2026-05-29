#include "VDC.h"
#include <string.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846f
#endif

static VDC_State  VDC_g_state;
static VDC_Config VDC_g_config;

void VDC_init(const VDC_Config* cfg) {
    if (cfg) VDC_g_config = *cfg;
    else {
        VDC_g_config.param1 = 1.0f; /* yaw gain factor */
        VDC_g_config.param2 = 0.0f;
        VDC_g_config.param3 = 0.0f;
        VDC_g_config.enabled = 1;
    }
    memset(&VDC_g_state, 0, sizeof(VDC_g_state));
}

void VDC_update(float dt_ms, const VehicleState* vs, VDC_State* state, ActuatorCommands* out) {
    (void)dt_ms;
    if (!VDC_g_config.enabled || !vs || !out) return;
    /* Target yaw rate from steering and speed (simplified bicycle model) */
    float steer_rad = vs->steering_wheel_deg * 0.15f * (float)(M_PI / 180.0);
    float target_yaw = (vs->speed_ms / 3.6f) * steer_rad / 3.6f; /* rough approx */
    float yaw_err = target_yaw - vs->yaw_rate_rad_s;
    float moment = yaw_err * 500.0f * VDC_g_config.param1;
    VDC_g_state.value = moment; /* store yaw moment demand in value */
    /* Apply torque vectoring differential to create yaw moment */
    if (fabsf(moment) > 50.0f) {
        float tv = moment * 0.5f;
        out->torque_vector_rl += tv;
        out->torque_vector_rr -= tv;
    }
    if (state) *state = VDC_g_state;
}

void VDC_shutdown(void) {
    VDC_g_state.value = 0.0f;
}
