#ifndef ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMSAFETY_H
#define ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMSAFETY_H

#include "TPM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TPM_safety_check(const VehicleState* vs, const TPM_State* state);
void TPM_safety_enter_failsoft(TPM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TYRE_PRESSURE_MONITORING_TPMSAFETY_H */
