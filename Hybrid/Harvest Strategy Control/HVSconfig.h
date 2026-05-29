#ifndef ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSCONFIG_H
#define ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSCONFIG_H

#include "HVS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const HVS_Config HVS_default_config;
void HVS_config_load_defaults(HVS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_HARVEST_STRATEGY_CONTROL_HVSCONFIG_H */
