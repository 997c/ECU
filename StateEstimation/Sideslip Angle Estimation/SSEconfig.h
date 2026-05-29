#ifndef ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSECONFIG_H
#define ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSECONFIG_H

#include "SSE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SSE_Config SSE_default_config;
void SSE_config_load_defaults(SSE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_SIDESLIP_ANGLE_ESTIMATION_SSECONFIG_H */
