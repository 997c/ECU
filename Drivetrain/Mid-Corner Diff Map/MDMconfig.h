#ifndef ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMCONFIG_H
#define ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMCONFIG_H

#include "MDM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const MDM_Config MDM_default_config;
void MDM_config_load_defaults(MDM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_MID_CORNER_DIFF_MAP_MDMCONFIG_H */
