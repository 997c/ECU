#include "AWSsafety.h"
#include <string.h>

bool AWS_safety_check(const VehicleState* vs, const AWS_State* state) {
    (void)vs; (void)state;
    /* TODO: AWS safety limits for All-Wheel Steering */
    return true;
}

void AWS_safety_enter_failsoft(AWS_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
