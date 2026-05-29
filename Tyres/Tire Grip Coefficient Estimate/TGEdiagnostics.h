#ifndef ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGEDIAGNOSTICS_H
#define ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGEDIAGNOSTICS_H

#include "TGE.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TGE_diagnostics_init(void);
void TGE_diagnostics_run(const TGE_State* state);
bool TGE_diagnostics_has_fault(void);
void TGE_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGEDIAGNOSTICS_H */
