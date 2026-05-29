#ifndef ECU_HYBRID_MGU_H_CONTROL_MGHSAFETY_H
#define ECU_HYBRID_MGU_H_CONTROL_MGHSAFETY_H

#include "MGH.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool MGH_safety_check(const VehicleState* vs, const MGH_State* state);
void MGH_safety_enter_failsoft(MGH_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_MGU_H_CONTROL_MGHSAFETY_H */
