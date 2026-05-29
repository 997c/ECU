#ifndef ECU_GEARBOX_ANTI_STALL_ASTSAFETY_H
#define ECU_GEARBOX_ANTI_STALL_ASTSAFETY_H

#include "AST.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool AST_safety_check(const VehicleState* vs, const AST_State* state);
void AST_safety_enter_failsoft(AST_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_ANTI_STALL_ASTSAFETY_H */
