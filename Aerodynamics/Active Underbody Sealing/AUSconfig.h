#ifndef ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSCONFIG_H

#include "AUS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AUS_Config AUS_default_config;
void AUS_config_load_defaults(AUS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_UNDERBODY_SEALING_AUSCONFIG_H */
