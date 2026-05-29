#ifndef ECU_TYRES_TIRE_STATE_ESTIMATION_TSECONFIG_H
#define ECU_TYRES_TIRE_STATE_ESTIMATION_TSECONFIG_H

#include "TSE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TSE_Config TSE_default_config;
void TSE_config_load_defaults(TSE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_STATE_ESTIMATION_TSECONFIG_H */
