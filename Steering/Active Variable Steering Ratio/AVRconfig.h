#ifndef ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRCONFIG_H
#define ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRCONFIG_H

#include "AVR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AVR_Config AVR_default_config;
void AVR_config_load_defaults(AVR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ACTIVE_VARIABLE_STEERING_RATIO_AVRCONFIG_H */
