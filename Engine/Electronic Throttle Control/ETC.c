#include "ETC.h"
#include <string.h>

static ETC_State  ETC_g_state;
static ETC_Config ETC_g_config;

void ETC_init(const ETC_Config* cfg) {
    if (cfg) ETC_g_config = *cfg;
    else {
        ETC_g_config.param1 = 5.0f;   /* max throttle rate per second */
        ETC_g_config.param2 = 0.0f;
        ETC_g_config.param3 = 0.0f;
        ETC_g_config.enabled = 1;
    }
    memset(&ETC_g_state, 0, sizeof(ETC_g_state));
}

void ETC_update(float dt_ms, const VehicleState* vs, ETC_State* state, ActuatorCommands* out) {
    if (!ETC_g_config.enabled || !vs || !out) return;
    float dt = dt_ms * 0.001f;
    float target = vs->throttle_pedal;
    /* Engine protection: derate if overheating */
    if (vs->engine_temp_c > 120.0f) target *= 0.5f;
    /* Rate limit */
    float max_step = ETC_g_config.param1 * dt;
    float cur = ETC_g_state.value; /* current commanded throttle */
    float err = target - cur;
    if (err > max_step) err = max_step;
    if (err < -max_step) err = -max_step;
    cur += err;
    cur = ecu_clampf(cur, 0.0f, 1.0f);
    ETC_g_state.value = cur;
    out->throttle_cmd = cur;
    if (state) *state = ETC_g_state;
}

void ETC_shutdown(void) {
    ETC_g_state.value = 0.0f;
}
