#ifndef ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRDIAGNOSTICS_H
#define ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRDIAGNOSTICS_H

#include "AKR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AKR_diagnostics_init(void);
void AKR_diagnostics_run(const AKR_State* state);
bool AKR_diagnostics_has_fault(void);
void AKR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTO_KINETIC_RECOVERY_AKRDIAGNOSTICS_H */
