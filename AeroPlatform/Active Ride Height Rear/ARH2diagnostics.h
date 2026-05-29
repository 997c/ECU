#ifndef ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2DIAGNOSTICS_H
#define ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2DIAGNOSTICS_H

#include "ARH2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARH2_diagnostics_init(void);
void ARH2_diagnostics_run(const ARH2_State* state);
bool ARH2_diagnostics_has_fault(void);
void ARH2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_RIDE_HEIGHT_REAR_ARH2DIAGNOSTICS_H */
