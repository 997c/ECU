#ifndef ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTDIAGNOSTICS_H
#define ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTDIAGNOSTICS_H

#include "ECT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ECT_diagnostics_init(void);
void ECT_diagnostics_run(const ECT_State* state);
bool ECT_diagnostics_has_fault(void);
void ECT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_ENGINE_COOLANT_THERMAL_MGMT_ECTDIAGNOSTICS_H */
