#ifndef ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTCONFIG_H
#define ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTCONFIG_H

#include "RBT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RBT_Config RBT_default_config;
void RBT_config_load_defaults(RBT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_REAR_BRAKE_TORQUE_WITH_REGEN_RBTCONFIG_H */
