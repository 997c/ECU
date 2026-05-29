#ifndef ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2DIAGNOSTICS_H
#define ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2DIAGNOSTICS_H

#include "ARS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARS2_diagnostics_init(void);
void ARS2_diagnostics_run(const ARS2_State* state);
bool ARS2_diagnostics_has_fault(void);
void ARS2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2DIAGNOSTICS_H */
