#include "IMUintegration.h"
#include <string.h>

static IMU_State IMU_g_int_state;

void IMU_integration_init(void) {
    memset(&IMU_g_int_state, 0, sizeof(IMU_g_int_state));
}

void IMU_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out) {
    IMU_update(dt_ms, &bridge->state, &IMU_g_int_state, out);
    /* TODO: map IMU outputs to global actuators (Inertial Measurement Unit Fusion) */
}
