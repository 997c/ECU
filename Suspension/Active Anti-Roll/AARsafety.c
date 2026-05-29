#include "AARsafety.h"
#include <string.h>

bool AAR_safety_check(const VehicleState* vs, const AAR_State* state) {
    (void)vs; (void)state;
    /* TODO: AAR safety limits for Active Anti-Roll */
    return true;
}

void AAR_safety_enter_failsoft(AAR_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
