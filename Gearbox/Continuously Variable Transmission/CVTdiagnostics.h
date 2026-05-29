#ifndef ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTDIAGNOSTICS_H
#define ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTDIAGNOSTICS_H

#include "CVT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void CVT_diagnostics_init(void);
void CVT_diagnostics_run(const CVT_State* state);
bool CVT_diagnostics_has_fault(void);
void CVT_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CONTINUOUSLY_VARIABLE_TRANSMISSION_CVTDIAGNOSTICS_H */
