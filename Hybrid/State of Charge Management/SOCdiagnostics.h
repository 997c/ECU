#ifndef ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCDIAGNOSTICS_H
#define ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCDIAGNOSTICS_H

#include "SOC.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void SOC_diagnostics_init(void);
void SOC_diagnostics_run(const SOC_State* state);
bool SOC_diagnostics_has_fault(void);
void SOC_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_STATE_OF_CHARGE_MANAGEMENT_SOCDIAGNOSTICS_H */
