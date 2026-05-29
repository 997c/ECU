#include "DCTdiagnostics.h"
#include <string.h>

static bool DCT_g_fault = false;

void DCT_diagnostics_init(void) {
    DCT_g_fault = false;
}

void DCT_diagnostics_run(const DCT_State* state) {
    (void)state;
    /* TODO: DCT diagnostic checks for Dual Clutch Transmission */
    DCT_g_fault = false;
}

bool DCT_diagnostics_has_fault(void) {
    return DCT_g_fault;
}

void DCT_diagnostics_clear(void) {
    DCT_g_fault = false;
}
