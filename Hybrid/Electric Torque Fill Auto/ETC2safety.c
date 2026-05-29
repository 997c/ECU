#include "ETC2safety.h"
#include <string.h>

bool ETC2_safety_check(const VehicleState* vs, const ETC2_State* state) {
    (void)vs; (void)state;
    /* TODO: ETC2 safety limits for Electric Torque Fill Auto */
    return true;
}

void ETC2_safety_enter_failsoft(ETC2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
