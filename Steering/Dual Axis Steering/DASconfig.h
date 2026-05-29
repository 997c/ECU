#ifndef ECU_STEERING_DUAL_AXIS_STEERING_DASCONFIG_H
#define ECU_STEERING_DUAL_AXIS_STEERING_DASCONFIG_H

#include "DAS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DAS_Config DAS_default_config;
void DAS_config_load_defaults(DAS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_DUAL_AXIS_STEERING_DASCONFIG_H */
