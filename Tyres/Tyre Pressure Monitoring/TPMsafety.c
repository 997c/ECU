#include "TPMsafety.h"
#include <string.h>

bool TPM_safety_check(const VehicleState* vs, const TPM_State* state) {
    (void)vs; (void)state;
    /* TODO: TPM safety limits for Tyre Pressure Monitoring */
    return true;
}

void TPM_safety_enter_failsoft(TPM_State* state) {
    if (state) {
        state->active = false;
        state->value = 0.0f;
        state->target = 0.0f;
    }
}
