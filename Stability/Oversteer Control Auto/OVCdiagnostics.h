#ifndef ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCDIAGNOSTICS_H
#define ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCDIAGNOSTICS_H

#include "OVC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void OVC_diagnostics_init(void);
void OVC_diagnostics_run(const OVC_State* state);
bool OVC_diagnostics_has_fault(void);
void OVC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_OVERSTEER_CONTROL_AUTO_OVCDIAGNOSTICS_H */
