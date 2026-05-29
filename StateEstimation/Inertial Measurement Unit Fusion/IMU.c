#include "IMU.h"
#include <string.h>

static IMU_State  IMU_g_state;
static IMU_Config IMU_g_config;

void IMU_init(const IMU_Config* cfg) {
    if (cfg) IMU_g_config = *cfg;
    else     memset(&IMU_g_config, 0, sizeof(IMU_g_config));
    memset(&IMU_g_state, 0, sizeof(IMU_g_state));
}

void IMU_update(float dt_ms, const VehicleState* vs, IMU_State* state, ActuatorCommands* out) {
    (void)dt_ms; (void)vs; (void)out;
    if (state) IMU_g_state = *state;
    /* TODO: implement IMU control logic for Inertial Measurement Unit Fusion */
}

void IMU_shutdown(void) {
    IMU_g_state.active = false;
}
