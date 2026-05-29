#ifndef ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICCONFIG_H
#define ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICCONFIG_H

#include "FRIC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FRIC_Config FRIC_default_config;
void FRIC_config_load_defaults(FRIC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_FRONT_REAR_INTERCONNECTED_SUSPENSION_FRICCONFIG_H */
