#ifndef ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCCONFIG_H
#define ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCCONFIG_H

#include "ARC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARC_Config ARC_default_config;
void ARC_config_load_defaults(ARC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_ROLL_CONTROL_ARCCONFIG_H */
