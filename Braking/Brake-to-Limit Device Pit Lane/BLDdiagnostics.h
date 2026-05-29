#ifndef ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDDIAGNOSTICS_H
#define ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDDIAGNOSTICS_H

#include "BLD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void BLD_diagnostics_init(void);
void BLD_diagnostics_run(const BLD_State* state);
bool BLD_diagnostics_has_fault(void);
void BLD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_TO_LIMIT_DEVICE_PIT_LANE_BLDDIAGNOSTICS_H */
