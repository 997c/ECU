#ifndef ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSCONFIG_H
#define ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSCONFIG_H

#include "EPS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EPS_Config EPS_default_config;
void EPS_config_load_defaults(EPS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ELECTRONIC_POWER_STEERING_AUTO_EPSCONFIG_H */
