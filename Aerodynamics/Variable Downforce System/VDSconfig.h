#ifndef ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSCONFIG_H
#define ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSCONFIG_H

#include "VDS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VDS_Config VDS_default_config;
void VDS_config_load_defaults(VDS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_DOWNFORCE_SYSTEM_VDSCONFIG_H */
