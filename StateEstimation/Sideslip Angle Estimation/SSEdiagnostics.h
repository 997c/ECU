#ifndef ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSEDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSEDIAGNOSTICS_H

#include "SSE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SSE_diagnostics_init(void);
void SSE_diagnostics_run(const SSE_State* state);
bool SSE_diagnostics_has_fault(void);
void SSE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSEDIAGNOSTICS_H */
