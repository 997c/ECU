#include "ADGsafety.h"
#include <string.h>

bool ADG_safety_check(const VehicleState* vs, const ADG_State* state) {
    (void)vs; (void)state;
    /* TODO: ADG safety limits for Active Diffuser Geometry */
    return true;
}

void ADG_safety_enter_failsoft(ADG_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
