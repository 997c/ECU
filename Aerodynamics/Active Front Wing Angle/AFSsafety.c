#include "AFSsafety.h"
#include <string.h>

bool AFS_safety_check(const VehicleState* vs, const AFS_State* state) {
    (void)vs; (void)state;
    /* TODO: AFS safety limits for Active Front Wing Angle */
    return true;
}

void AFS_safety_enter_failsoft(AFS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
