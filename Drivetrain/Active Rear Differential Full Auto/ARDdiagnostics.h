#ifndef ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDDIAGNOSTICS_H
#define ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDDIAGNOSTICS_H

#include "ARD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ARD_diagnostics_init(void);
void ARD_diagnostics_run(const ARD_State* state);
bool ARD_diagnostics_has_fault(void);
void ARD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDDIAGNOSTICS_H */
