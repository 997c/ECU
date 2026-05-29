#ifndef ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMCONFIG_H
#define ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMCONFIG_H

#include "EBM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EBM_Config EBM_default_config;
void EBM_config_load_defaults(EBM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ENGINE_BRAKE_MAP_EBMCONFIG_H */
