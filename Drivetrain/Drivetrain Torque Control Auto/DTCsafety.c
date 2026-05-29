#include "DTCsafety.h"
#include <string.h>

bool DTC_safety_check(const VehicleState* vs, const DTC_State* state) {
    (void)vs; (void)state;
    /* TODO: DTC safety limits for Drivetrain Torque Control Auto */
    return true;
}

void DTC_safety_enter_failsoft(DTC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
