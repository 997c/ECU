#ifndef ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGCONFIG_H
#define ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGCONFIG_H

#include "VTG.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VTG_Config VTG_default_config;
void VTG_config_load_defaults(VTG_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_TURBINE_GEOMETRY_VTGCONFIG_H */
