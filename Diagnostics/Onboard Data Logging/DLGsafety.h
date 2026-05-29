#ifndef ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGSAFETY_H
#define ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGSAFETY_H

#include "DLG.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool DLG_safety_check(const VehicleState* vs, const DLG_State* state);
void DLG_safety_enter_failsoft(DLG_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ONBOARD_DATA_LOGGING_DLGSAFETY_H */
