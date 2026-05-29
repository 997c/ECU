#ifndef ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMCONFIG_H
#define ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMCONFIG_H

#include "AFM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFM_Config AFM_default_config;
void AFM_config_load_defaults(AFM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ACTIVE_FUEL_MAP_AUTO_SELECT_AFMCONFIG_H */
