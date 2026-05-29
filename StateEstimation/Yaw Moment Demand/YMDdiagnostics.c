#include "YMDdiagnostics.h"
#include <string.h>

static bool YMD_g_fault = false;

void YMD_diagnostics_init(void) {
    YMD_g_fault = false;
}

void YMD_diagnostics_run(const YMD_State* state) {
    (void)state;
    /* TODO: YMD diagnostic checks for Yaw Moment Demand */
    YMD_g_fault = false;
}

bool YMD_diagnostics_has_fault(void) {
    return YMD_g_fault;
}

void YMD_diagnostics_clear(void) {
    YMD_g_fault = false;
}
