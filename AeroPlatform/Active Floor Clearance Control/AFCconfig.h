#ifndef ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCCONFIG_H
#define ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCCONFIG_H

#include "AFC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFC_Config AFC_default_config;
void AFC_config_load_defaults(AFC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_ACTIVE_FLOOR_CLEARANCE_CONTROL_AFCCONFIG_H */
