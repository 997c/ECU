#ifndef ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLDIAGNOSTICS_H
#define ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLDIAGNOSTICS_H

#include "FFL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FFL_diagnostics_init(void);
void FFL_diagnostics_run(const FFL_State* state);
bool FFL_diagnostics_has_fault(void);
void FFL_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLDIAGNOSTICS_H */
