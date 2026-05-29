#ifndef ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTCONFIG_H
#define ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTCONFIG_H

#include "TCT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TCT_Config TCT_default_config;
void TCT_config_load_defaults(TCT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_CARCASS_TEMPERATURE_MODEL_TCTCONFIG_H */
