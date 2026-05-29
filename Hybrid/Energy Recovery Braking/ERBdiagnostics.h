#ifndef ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBDIAGNOSTICS_H
#define ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBDIAGNOSTICS_H

#include "ERB.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ERB_diagnostics_init(void);
void ERB_diagnostics_run(const ERB_State* state);
bool ERB_diagnostics_has_fault(void);
void ERB_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ENERGY_RECOVERY_BRAKING_ERBDIAGNOSTICS_H */
