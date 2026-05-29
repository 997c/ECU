#include "IMUsafety.h"
#include <string.h>

bool IMU_safety_check(const VehicleState* vs, const IMU_State* state) {
    (void)vs; (void)state;
    /* TODO: IMU safety limits for Inertial Measurement Unit Fusion */
    return true;
}

void IMU_safety_enter_failsoft(IMU_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
