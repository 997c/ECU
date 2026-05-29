#ifndef ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2CONFIG_H
#define ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2CONFIG_H

#include "VGT2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VGT2_Config VGT2_default_config;
void VGT2_config_load_defaults(VGT2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2CONFIG_H */
