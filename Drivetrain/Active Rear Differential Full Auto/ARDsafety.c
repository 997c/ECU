#include "ARDsafety.h"
#include <string.h>

bool ARD_safety_check(const VehicleState* vs, const ARD_State* state) {
    (void)vs; (void)state;
    /* TODO: ARD safety limits for Active Rear Differential Full Auto */
    return true;
}

void ARD_safety_enter_failsoft(ARD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
