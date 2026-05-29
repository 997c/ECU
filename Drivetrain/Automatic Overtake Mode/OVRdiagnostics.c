#include "OVRdiagnostics.h"
#include <string.h>

static bool OVR_g_fault = false;

void OVR_diagnostics_init(void) {
    OVR_g_fault = false;
}

void OVR_diagnostics_run(const OVR_State* state) {
    (void)state;
    /* TODO: OVR diagnostic checks for Automatic Overtake Mode */
    OVR_g_fault = false;
}

bool OVR_diagnostics_has_fault(void) {
    return OVR_g_fault;
}

void OVR_diagnostics_clear(void) {
    OVR_g_fault = false;
}
