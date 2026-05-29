#ifndef ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSEDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSEDIAGNOSTICS_H

#include "VSE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VSE_diagnostics_init(void);
void VSE_diagnostics_run(const VSE_State* state);
bool VSE_diagnostics_has_fault(void);
void VSE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_VEHICLE_SPEED_ESTIMATION_VSEDIAGNOSTICS_H */
