#ifndef ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDDIAGNOSTICS_H
#define ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDDIAGNOSTICS_H

#include "WSD.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void WSD_diagnostics_init(void);
void WSD_diagnostics_run(const WSD_State* state);
bool WSD_diagnostics_has_fault(void);
void WSD_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDDIAGNOSTICS_H */
