#ifndef ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDEDIAGNOSTICS_H
#define ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDEDIAGNOSTICS_H

#include "TDE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TDE_diagnostics_init(void);
void TDE_diagnostics_run(const TDE_State* state);
bool TDE_diagnostics_has_fault(void);
void TDE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDEDIAGNOSTICS_H */
