#ifndef ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMCONFIG_H
#define ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMCONFIG_H

#include "ARM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARM_Config ARM_default_config;
void ARM_config_load_defaults(ARM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_REV_MATCHING_ARMCONFIG_H */
