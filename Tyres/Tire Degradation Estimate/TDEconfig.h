#ifndef ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDECONFIG_H
#define ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDECONFIG_H

#include "TDE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TDE_Config TDE_default_config;
void TDE_config_load_defaults(TDE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_DEGRADATION_ESTIMATE_TDECONFIG_H */
