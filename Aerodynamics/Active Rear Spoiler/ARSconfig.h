#ifndef ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSCONFIG_H

#include "ARS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARS_Config ARS_default_config;
void ARS_config_load_defaults(ARS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_REAR_SPOILER_ARSCONFIG_H */
