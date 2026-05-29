#ifndef ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCCONFIG_H
#define ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCCONFIG_H

#include "AYC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AYC_Config AYC_default_config;
void AYC_config_load_defaults(AYC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_ACTIVE_YAW_CONTROL_AYCCONFIG_H */
