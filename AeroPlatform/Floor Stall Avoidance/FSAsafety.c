#include "FSAsafety.h"
#include <string.h>

bool FSA_safety_check(const VehicleState* vs, const FSA_State* state) {
    (void)vs; (void)state;
    /* TODO: FSA safety limits for Floor Stall Avoidance */
    return true;
}

void FSA_safety_enter_failsoft(FSA_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
