#ifndef ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALEDIAGNOSTICS_H
#define ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALEDIAGNOSTICS_H

#include "ALE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ALE_diagnostics_init(void);
void ALE_diagnostics_run(const ALE_State* state);
bool ALE_diagnostics_has_fault(void);
void ALE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALEDIAGNOSTICS_H */
