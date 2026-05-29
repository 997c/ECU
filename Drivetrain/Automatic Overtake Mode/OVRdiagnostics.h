#ifndef ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRDIAGNOSTICS_H
#define ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRDIAGNOSTICS_H

#include "OVR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void OVR_diagnostics_init(void);
void OVR_diagnostics_run(const OVR_State* state);
bool OVR_diagnostics_has_fault(void);
void OVR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRDIAGNOSTICS_H */
