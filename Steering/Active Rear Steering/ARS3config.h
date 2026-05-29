#ifndef ECU_STEERING_ACTIVE_REAR_STEERING_ARS3CONFIG_H
#define ECU_STEERING_ACTIVE_REAR_STEERING_ARS3CONFIG_H

#include "ARS3.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARS3_Config ARS3_default_config;
void ARS3_config_load_defaults(ARS3_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_REAR_STEERING_ARS3CONFIG_H */
