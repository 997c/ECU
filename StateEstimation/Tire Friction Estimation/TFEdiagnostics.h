#ifndef ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFEDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFEDIAGNOSTICS_H

#include "TFE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TFE_diagnostics_init(void);
void TFE_diagnostics_run(const TFE_State* state);
bool TFE_diagnostics_has_fault(void);
void TFE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFEDIAGNOSTICS_H */
