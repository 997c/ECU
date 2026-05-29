#include "BKTdiagnostics.h"
#include <string.h>

static bool BKT_g_fault = false;

void BKT_diagnostics_init(void) {
    BKT_g_fault = false;
}

void BKT_diagnostics_run(const BKT_State* state) {
    (void)state;
    /* TODO: BKT diagnostic checks for Brake Temperature Management */
    BKT_g_fault = false;
}

bool BKT_diagnostics_has_fault(void) {
    return BKT_g_fault;
}

void BKT_diagnostics_clear(void) {
    BKT_g_fault = false;
}
