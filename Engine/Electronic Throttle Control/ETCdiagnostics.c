#include "ETCdiagnostics.h"
#include <string.h>

static bool ETC_g_fault = false;

void ETC_diagnostics_init(void) {
    ETC_g_fault = false;
}

void ETC_diagnostics_run(const ETC_State* state) {
    (void)state;
    /* TODO: ETC diagnostic checks for Electronic Throttle Control */
    ETC_g_fault = false;
}

bool ETC_diagnostics_has_fault(void) {
    return ETC_g_fault;
}

void ETC_diagnostics_clear(void) {
    ETC_g_fault = false;
}
