#ifndef ECU_TYRES_TIRE_STATE_ESTIMATION_TSEDIAGNOSTICS_H
#define ECU_TYRES_TIRE_STATE_ESTIMATION_TSEDIAGNOSTICS_H

#include "TSE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TSE_diagnostics_init(void);
void TSE_diagnostics_run(const TSE_State* state);
bool TSE_diagnostics_has_fault(void);
void TSE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_STATE_ESTIMATION_TSEDIAGNOSTICS_H */
