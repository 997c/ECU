#ifndef ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFDIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFDIAGNOSTICS_H

#include "AWF.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AWF_diagnostics_init(void);
void AWF_diagnostics_run(const AWF_State* state);
bool AWF_diagnostics_has_fault(void);
void AWF_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFDIAGNOSTICS_H */
