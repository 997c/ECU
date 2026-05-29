#include "BMSdiagnostics.h"
#include <string.h>

static bool BMS_g_fault = false;

void BMS_diagnostics_init(void) {
    BMS_g_fault = false;
}

void BMS_diagnostics_run(const BMS_State* state) {
    (void)state;
    /* TODO: BMS diagnostic checks for Brake Migration Shaping */
    BMS_g_fault = false;
}

bool BMS_diagnostics_has_fault(void) {
    return BMS_g_fault;
}

void BMS_diagnostics_clear(void) {
    BMS_g_fault = false;
}
