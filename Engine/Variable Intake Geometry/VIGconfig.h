#ifndef ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGCONFIG_H
#define ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGCONFIG_H

#include "VIG.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VIG_Config VIG_default_config;
void VIG_config_load_defaults(VIG_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_INTAKE_GEOMETRY_VIGCONFIG_H */
