#ifndef ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSCONFIG_H
#define ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSCONFIG_H

#include "FCS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FCS_Config FCS_default_config;
void FCS_config_load_defaults(FCS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_FAN_CAR_SUCTION_SYSTEM_FCSCONFIG_H */
