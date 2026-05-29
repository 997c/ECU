#ifndef ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALECONFIG_H
#define ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALECONFIG_H

#include "ALE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ALE_Config ALE_default_config;
void ALE_config_load_defaults(ALE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_AERO_LOAD_ESTIMATION_ALECONFIG_H */
