#ifndef ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSCONFIG_H
#define ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSCONFIG_H

#include "PPS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const PPS_Config PPS_default_config;
void PPS_config_load_defaults(PPS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_PORPOISING_SUPPRESSION_PPSCONFIG_H */
