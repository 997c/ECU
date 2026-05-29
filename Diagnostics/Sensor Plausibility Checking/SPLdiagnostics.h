#ifndef ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLDIAGNOSTICS_H
#define ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLDIAGNOSTICS_H

#include "SPL.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SPL_diagnostics_init(void);
void SPL_diagnostics_run(const SPL_State* state);
bool SPL_diagnostics_has_fault(void);
void SPL_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_SENSOR_PLAUSIBILITY_CHECKING_SPLDIAGNOSTICS_H */
