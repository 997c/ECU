#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASCONFIG_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASCONFIG_H

#include "GAS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const GAS_Config GAS_default_config;
void GAS_config_load_defaults(GAS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_ACTIVE_SEALING_GASCONFIG_H */
