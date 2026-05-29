#include "RBTdiagnostics.h"
#include <string.h>

static bool RBT_g_fault = false;

void RBT_diagnostics_init(void) {
    RBT_g_fault = false;
}

void RBT_diagnostics_run(const RBT_State* state) {
    (void)state;
    /* TODO: RBT diagnostic checks for Rear Brake Torque with Regen */
    RBT_g_fault = false;
}

bool RBT_diagnostics_has_fault(void) {
    return RBT_g_fault;
}

void RBT_diagnostics_clear(void) {
    RBT_g_fault = false;
}
