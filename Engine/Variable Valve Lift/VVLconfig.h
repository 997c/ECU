#ifndef ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLCONFIG_H
#define ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLCONFIG_H

#include "VVL.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VVL_Config VVL_default_config;
void VVL_config_load_defaults(VVL_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_LIFT_VVLCONFIG_H */
