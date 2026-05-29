#ifndef ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFCONFIG_H
#define ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFCONFIG_H

#include "AWF.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AWF_Config AWF_default_config;
void AWF_config_load_defaults(AWF_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_ACTIVE_WING_FLAP_NON_DRS_AWFCONFIG_H */
