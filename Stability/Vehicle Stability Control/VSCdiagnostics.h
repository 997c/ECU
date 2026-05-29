#ifndef ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCDIAGNOSTICS_H
#define ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCDIAGNOSTICS_H

#include "VSC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VSC_diagnostics_init(void);
void VSC_diagnostics_run(const VSC_State* state);
bool VSC_diagnostics_has_fault(void);
void VSC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_VEHICLE_STABILITY_CONTROL_VSCDIAGNOSTICS_H */
