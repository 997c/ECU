#ifndef ECU_ENGINE_FUEL_INJECTION_CONTROL_FICDIAGNOSTICS_H
#define ECU_ENGINE_FUEL_INJECTION_CONTROL_FICDIAGNOSTICS_H

#include "FIC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void FIC_diagnostics_init(void);
void FIC_diagnostics_run(const FIC_State* state);
bool FIC_diagnostics_has_fault(void);
void FIC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_INJECTION_CONTROL_FICDIAGNOSTICS_H */
