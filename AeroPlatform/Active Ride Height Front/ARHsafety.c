#include "ARHsafety.h"
#include <string.h>

bool ARH_safety_check(const VehicleState* vs, const ARH_State* state) {
    (void)vs; (void)state;
    /* TODO: ARH safety limits for Active Ride Height Front */
    return true;
}

void ARH_safety_enter_failsoft(ARH_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
