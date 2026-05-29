#ifndef ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2DIAGNOSTICS_H
#define ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2DIAGNOSTICS_H

#include "EBD2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void EBD2_diagnostics_init(void);
void EBD2_diagnostics_run(const EBD2_State* state);
bool EBD2_diagnostics_has_fault(void);
void EBD2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_EXHAUST_BLOWN_DIFFUSER_EBD2DIAGNOSTICS_H */
