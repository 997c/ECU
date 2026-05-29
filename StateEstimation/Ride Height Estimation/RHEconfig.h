#ifndef ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHECONFIG_H
#define ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHECONFIG_H

#include "RHE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const RHE_Config RHE_default_config;
void RHE_config_load_defaults(RHE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_RIDE_HEIGHT_ESTIMATION_RHECONFIG_H */
