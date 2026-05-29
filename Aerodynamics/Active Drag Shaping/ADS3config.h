#ifndef ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3CONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3CONFIG_H

#include "ADS3.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ADS3_Config ADS3_default_config;
void ADS3_config_load_defaults(ADS3_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DRAG_SHAPING_ADS3CONFIG_H */
