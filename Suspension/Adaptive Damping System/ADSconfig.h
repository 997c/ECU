#ifndef ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSCONFIG_H
#define ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSCONFIG_H

#include "ADS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ADS_Config ADS_default_config;
void ADS_config_load_defaults(ADS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ADAPTIVE_DAMPING_SYSTEM_ADSCONFIG_H */
