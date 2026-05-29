#ifndef ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPSAFETY_H
#define ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPSAFETY_H

#include "LMP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool LMP_safety_check(const VehicleState* vs, const LMP_State* state);
void LMP_safety_enter_failsoft(LMP_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPSAFETY_H */
