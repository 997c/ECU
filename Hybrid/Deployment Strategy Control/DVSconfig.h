#ifndef ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSCONFIG_H
#define ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSCONFIG_H

#include "DVS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DVS_Config DVS_default_config;
void DVS_config_load_defaults(DVS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_DEPLOYMENT_STRATEGY_CONTROL_DVSCONFIG_H */
