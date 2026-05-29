#ifndef ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMCONFIG_H
#define ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMCONFIG_H

#include "EDM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EDM_Config EDM_default_config;
void EDM_config_load_defaults(EDM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENTRY_DIFF_MAP_EDMCONFIG_H */
