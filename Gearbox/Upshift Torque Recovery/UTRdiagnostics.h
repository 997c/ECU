#ifndef ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRDIAGNOSTICS_H
#define ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRDIAGNOSTICS_H

#include "UTR.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void UTR_diagnostics_init(void);
void UTR_diagnostics_run(const UTR_State* state);
bool UTR_diagnostics_has_fault(void);
void UTR_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRDIAGNOSTICS_H */
