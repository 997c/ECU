#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHDIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHDIAGNOSTICS_H

#include "ARH.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARH_diagnostics_init(void);
void ARH_diagnostics_run(const ARH_State* state);
bool ARH_diagnostics_has_fault(void);
void ARH_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_FRONT_ARHDIAGNOSTICS_H */
