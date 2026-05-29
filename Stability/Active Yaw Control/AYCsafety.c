#include "AYCsafety.h"
#include <string.h>

bool AYC_safety_check(const VehicleState* vs, const AYC_State* state) {
    (void)vs; (void)state;
    /* TODO: AYC safety limits for Active Yaw Control */
    return true;
}

void AYC_safety_enter_failsoft(AYC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
