#include "ABDsafety.h"
#include <string.h>

bool ABD_safety_check(const VehicleState* vs, const ABD_State* state) {
    (void)vs; (void)state;
    /* TODO: ABD safety limits for Active Brake Duct Control */
    return true;
}

void ABD_safety_enter_failsoft(ABD_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
