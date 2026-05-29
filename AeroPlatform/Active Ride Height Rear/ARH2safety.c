#include "ARH2safety.h"
#include <string.h>

bool ARH2_safety_check(const VehicleState* vs, const ARH2_State* state) {
    (void)vs; (void)state;
    /* TODO: ARH2 safety limits for Active Ride Height Rear */
    return true;
}

void ARH2_safety_enter_failsoft(ARH2_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
