#ifndef ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3DIAGNOSTICS_H
#define ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3DIAGNOSTICS_H

#include "ADS3.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ADS3_diagnostics_init(void);
void ADS3_diagnostics_run(const ADS3_State* state);
bool ADS3_diagnostics_has_fault(void);
void ADS3_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3DIAGNOSTICS_H */
