#include "ABCsafety.h"
#include <string.h>

bool ABC_safety_check(const VehicleState* vs, const ABC_State* state) {
    (void)vs; (void)state;
    /* TODO: ABC safety limits for Active Body Control */
    return true;
}

void ABC_safety_enter_failsoft(ABC_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
