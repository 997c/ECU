#ifndef ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSCONFIG_H
#define ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSCONFIG_H

#include "DDS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DDS_Config DDS_default_config;
void DDS_config_load_defaults(DDS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DOUBLE_DIFFUSER_SYSTEM_DDSCONFIG_H */
