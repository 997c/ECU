#ifndef ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBDIAGNOSTICS_H
#define ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBDIAGNOSTICS_H

#include "TVB.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void TVB_diagnostics_init(void);
void TVB_diagnostics_run(const TVB_State* state);
bool TVB_diagnostics_has_fault(void);
void TVB_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_TORQUE_VECTORING_BY_BRAKES_TVBDIAGNOSTICS_H */
