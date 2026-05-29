#ifndef ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2CONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2CONFIG_H

#include "AFS2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFS2_Config AFS2_default_config;
void AFS2_config_load_defaults(AFS2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_FRONT_SPLITTER_CONTROL_AFS2CONFIG_H */
