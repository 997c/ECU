#ifndef ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTCONFIG_H
#define ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTCONFIG_H

#include "VVT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VVT_Config VVT_default_config;
void VVT_config_load_defaults(VVT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_VALVE_TIMING_VVTCONFIG_H */
