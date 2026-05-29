#ifndef ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOSAFETY_H
#define ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOSAFETY_H

#include "LEO.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool LEO_safety_check(const VehicleState* vs, const LEO_State* state);
void LEO_safety_enter_failsoft(LEO_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOSAFETY_H */
