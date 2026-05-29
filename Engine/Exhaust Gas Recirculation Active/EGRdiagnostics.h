#ifndef ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRDIAGNOSTICS_H
#define ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRDIAGNOSTICS_H

#include "EGR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EGR_diagnostics_init(void);
void EGR_diagnostics_run(const EGR_State* state);
bool EGR_diagnostics_has_fault(void);
void EGR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRDIAGNOSTICS_H */
