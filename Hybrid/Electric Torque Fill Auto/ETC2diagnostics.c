#include "ETC2diagnostics.h"
#include <string.h>

static bool ETC2_g_fault = false;

void ETC2_diagnostics_init(void) {
    ETC2_g_fault = false;
}

void ETC2_diagnostics_run(const ETC2_State* state) {
    (void)state;
    /* TODO: ETC2 diagnostic checks for Electric Torque Fill Auto */
    ETC2_g_fault = false;
}

bool ETC2_diagnostics_has_fault(void) {
    return ETC2_g_fault;
}

void ETC2_diagnostics_clear(void) {
    ETC2_g_fault = false;
}
