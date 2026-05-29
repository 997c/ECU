#ifndef ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSDIAGNOSTICS_H
#define ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSDIAGNOSTICS_H

#include "PLS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void PLS_diagnostics_init(void);
void PLS_diagnostics_run(const PLS_State* state);
bool PLS_diagnostics_has_fault(void);
void PLS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSDIAGNOSTICS_H */
