#ifndef ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISSAFETY_H
#define ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISSAFETY_H

#include "EIS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool EIS_safety_check(const VehicleState* vs, const EIS_State* state);
void EIS_safety_enter_failsoft(EIS_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISSAFETY_H */
