#include "YRCdiagnostics.h"
#include <string.h>

static bool YRC_g_fault = false;

void YRC_diagnostics_init(void) {
    YRC_g_fault = false;
}

void YRC_diagnostics_run(const YRC_State* state) {
    (void)state;
    /* TODO: YRC diagnostic checks for Yaw Rate Control */
    YRC_g_fault = false;
}

bool YRC_diagnostics_has_fault(void) {
    return YRC_g_fault;
}

void YRC_diagnostics_clear(void) {
    YRC_g_fault = false;
}
