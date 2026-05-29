#ifndef ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTCONFIG_H
#define ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTCONFIG_H

#include "AVT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AVT_Config AVT_default_config;
void AVT_config_load_defaults(AVT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_VALVE_TIMING_FULL_CONTROL_AVTCONFIG_H */
