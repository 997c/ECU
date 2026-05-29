#ifndef ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDCONFIG_H
#define ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDCONFIG_H

#include "AFD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFD_Config AFD_default_config;
void AFD_config_load_defaults(AFD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_FRONT_DIFFERENTIAL_AFDCONFIG_H */
