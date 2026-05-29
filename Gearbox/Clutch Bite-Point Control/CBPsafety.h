#ifndef ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPSAFETY_H
#define ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPSAFETY_H

#include "CBP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

bool CBP_safety_check(const VehicleState* vs, const CBP_State* state);
void CBP_safety_enter_failsoft(CBP_State* state);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPSAFETY_H */
