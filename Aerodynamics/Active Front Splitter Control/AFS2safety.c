#include "AFS2safety.h"
#include <string.h>

bool AFS2_safety_check(const VehicleState* vs, const AFS2_State* state) {
    (void)vs; (void)state;
    /* TODO: AFS2 safety limits for Active Front Splitter Control */
    return true;
}

void AFS2_safety_enter_failsoft(AFS2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
