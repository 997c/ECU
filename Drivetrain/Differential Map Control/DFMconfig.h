#ifndef ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMCONFIG_H
#define ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMCONFIG_H

#include "DFM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DFM_Config DFM_default_config;
void DFM_config_load_defaults(DFM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DIFFERENTIAL_MAP_CONTROL_DFMCONFIG_H */
