#ifndef ECU_DRIVETRAIN_LAUNCH_CONTROL_LCCONFIG_H
#define ECU_DRIVETRAIN_LAUNCH_CONTROL_LCCONFIG_H

#include "LC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const LC_Config LC_default_config;
void LC_config_load_defaults(LC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_LAUNCH_CONTROL_LCCONFIG_H */
