#ifndef ECU_AERO_PLATFORM_ROLL_CONTROL_RLCCONFIG_H
#define ECU_AERO_PLATFORM_ROLL_CONTROL_RLCCONFIG_H

#include "RLC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RLC_Config RLC_default_config;
void RLC_config_load_defaults(RLC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ROLL_CONTROL_RLCCONFIG_H */
