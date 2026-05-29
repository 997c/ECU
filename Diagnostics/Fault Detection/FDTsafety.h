#ifndef ECU_DIAGNOSTICS_FAULT_DETECTION_FDTSAFETY_H
#define ECU_DIAGNOSTICS_FAULT_DETECTION_FDTSAFETY_H

#include "FDT.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool FDT_safety_check(const VehicleState* vs, const FDT_State* state);
void FDT_safety_enter_failsoft(FDT_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_FAULT_DETECTION_FDTSAFETY_H */
