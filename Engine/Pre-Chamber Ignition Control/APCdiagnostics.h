#ifndef ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCDIAGNOSTICS_H
#define ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCDIAGNOSTICS_H

#include "APC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void APC_diagnostics_init(void);
void APC_diagnostics_run(const APC_State* state);
bool APC_diagnostics_has_fault(void);
void APC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCDIAGNOSTICS_H */
