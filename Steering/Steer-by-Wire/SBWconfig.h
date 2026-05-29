#ifndef ECU_STEERING_STEER_BY_WIRE_SBWCONFIG_H
#define ECU_STEERING_STEER_BY_WIRE_SBWCONFIG_H

#include "SBW.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SBW_Config SBW_default_config;
void SBW_config_load_defaults(SBW_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_STEER_BY_WIRE_SBWCONFIG_H */
