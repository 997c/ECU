#include "IMUdiagnostics.h"
#include <string.h>

static bool IMU_g_fault = false;

void IMU_diagnostics_init(void) {
    IMU_g_fault = false;
}

void IMU_diagnostics_run(const IMU_State* state) {
    (void)state;
    /* TODO: IMU diagnostic checks for Inertial Measurement Unit Fusion */
    IMU_g_fault = false;
}

bool IMU_diagnostics_has_fault(void) {
    return IMU_g_fault;
}

void IMU_diagnostics_clear(void) {
    IMU_g_fault = false;
}
