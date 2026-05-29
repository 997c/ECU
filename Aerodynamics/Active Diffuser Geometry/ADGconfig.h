#ifndef ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGCONFIG_H

#include "ADG.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ADG_Config ADG_default_config;
void ADG_config_load_defaults(ADG_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_DIFFUSER_GEOMETRY_ADGCONFIG_H */
