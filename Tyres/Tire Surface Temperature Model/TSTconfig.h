#ifndef ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTCONFIG_H
#define ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTCONFIG_H

#include "TST.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TST_Config TST_default_config;
void TST_config_load_defaults(TST_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_SURFACE_TEMPERATURE_MODEL_TSTCONFIG_H */
