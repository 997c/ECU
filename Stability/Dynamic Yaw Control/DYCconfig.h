#ifndef ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCCONFIG_H
#define ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCCONFIG_H

#include "DYC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DYC_Config DYC_default_config;
void DYC_config_load_defaults(DYC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_DYNAMIC_YAW_CONTROL_DYCCONFIG_H */
