#ifndef ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESCONFIG_H
#define ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESCONFIG_H

#include "GES.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const GES_Config GES_default_config;
void GES_config_load_defaults(GES_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_GROUND_EFFECT_SLIDING_SKIRTS_GESCONFIG_H */
