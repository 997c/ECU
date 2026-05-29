#ifndef ECU_STEERING_ALL_WHEEL_STEERING_AWSCONFIG_H
#define ECU_STEERING_ALL_WHEEL_STEERING_AWSCONFIG_H

#include "AWS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AWS_Config AWS_default_config;
void AWS_config_load_defaults(AWS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ALL_WHEEL_STEERING_AWSCONFIG_H */
