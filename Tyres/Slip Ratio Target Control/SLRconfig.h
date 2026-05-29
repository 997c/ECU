#ifndef ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRCONFIG_H
#define ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRCONFIG_H

#include "SLR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SLR_Config SLR_default_config;
void SLR_config_load_defaults(SLR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_SLIP_RATIO_TARGET_CONTROL_SLRCONFIG_H */
