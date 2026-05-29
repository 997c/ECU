#ifndef ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTCONFIG_H
#define ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTCONFIG_H

#include "ACT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ACT_Config ACT_default_config;
void ACT_config_load_defaults(ACT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_CAMBER_CONTROL_ACTCONFIG_H */
