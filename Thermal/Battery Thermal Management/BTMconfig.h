#ifndef ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMCONFIG_H
#define ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMCONFIG_H

#include "BTM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BTM_Config BTM_default_config;
void BTM_config_load_defaults(BTM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_BATTERY_THERMAL_MANAGEMENT_BTMCONFIG_H */
