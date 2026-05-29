#include "DDSdiagnostics.h"
#include <string.h>

static bool DDS_g_fault = false;

void DDS_diagnostics_init(void) {
    DDS_g_fault = false;
}

void DDS_diagnostics_run(const DDS_State* state) {
    (void)state;
    /* TODO: DDS diagnostic checks for Double Diffuser System */
    DDS_g_fault = false;
}

bool DDS_diagnostics_has_fault(void) {
    return DDS_g_fault;
}

void DDS_diagnostics_clear(void) {
    DDS_g_fault = false;
}
