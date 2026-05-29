#include "ADS4safety.h"
#include <string.h>

bool ADS4_safety_check(const VehicleState* vs, const ADS4_State* state) {
    (void)vs; (void)state;
    /* TODO: ADS4 safety limits for Active Downforce Split FR */
    return true;
}

void ADS4_safety_enter_failsoft(ADS4_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
