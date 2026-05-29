#ifndef ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTCONFIG_H
#define ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTCONFIG_H

#include "MGT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const MGT_Config MGT_default_config;
void MGT_config_load_defaults(MGT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_THERMAL_MGU_TEMPERATURE_CONTROL_MGTCONFIG_H */
