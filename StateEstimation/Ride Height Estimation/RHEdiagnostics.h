#ifndef ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHEDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHEDIAGNOSTICS_H

#include "RHE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void RHE_diagnostics_init(void);
void RHE_diagnostics_run(const RHE_State* state);
bool RHE_diagnostics_has_fault(void);
void RHE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHEDIAGNOSTICS_H */
