#ifndef ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2CONFIG_H
#define ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2CONFIG_H

#include "ADS2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ADS2_Config ADS2_default_config;
void ADS2_config_load_defaults(ADS2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_DIVE_SUPPRESSION_ADS2CONFIG_H */
