#ifndef ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRCONFIG_H
#define ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRCONFIG_H

#include "EGR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EGR_Config EGR_default_config;
void EGR_config_load_defaults(EGR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_EXHAUST_GAS_RECIRCULATION_ACTIVE_EGRCONFIG_H */
