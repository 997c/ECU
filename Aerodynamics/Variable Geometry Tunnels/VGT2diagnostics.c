#include "VGT2diagnostics.h"
#include <string.h>

static bool VGT2_g_fault = false;

void VGT2_diagnostics_init(void) {
    VGT2_g_fault = false;
}

void VGT2_diagnostics_run(const VGT2_State* state) {
    (void)state;
    /* TODO: VGT2 diagnostic checks for Variable Geometry Tunnels */
    VGT2_g_fault = false;
}

bool VGT2_diagnostics_has_fault(void) {
    return VGT2_g_fault;
}

void VGT2_diagnostics_clear(void) {
    VGT2_g_fault = false;
}
