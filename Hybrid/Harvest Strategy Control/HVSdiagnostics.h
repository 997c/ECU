#ifndef ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSDIAGNOSTICS_H
#define ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSDIAGNOSTICS_H

#include "HVS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void HVS_diagnostics_init(void);
void HVS_diagnostics_run(const HVS_State* state);
bool HVS_diagnostics_has_fault(void);
void HVS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSDIAGNOSTICS_H */
