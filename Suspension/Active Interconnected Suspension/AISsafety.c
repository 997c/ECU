#include "AISsafety.h"
#include <string.h>

bool AIS_safety_check(const VehicleState* vs, const AIS_State* state) {
    (void)vs; (void)state;
    /* TODO: AIS safety limits for Active Interconnected Suspension */
    return true;
}

void AIS_safety_enter_failsoft(AIS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
