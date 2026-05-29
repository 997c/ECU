#ifndef ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMSAFETY_H
#define ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMSAFETY_H

#include "TLM.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool TLM_safety_check(const VehicleState* vs, const TLM_State* state);
void TLM_safety_enter_failsoft(TLM_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMSAFETY_H */
