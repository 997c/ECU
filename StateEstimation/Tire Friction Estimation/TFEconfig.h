#ifndef ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFECONFIG_H
#define ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFECONFIG_H

#include "TFE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TFE_Config TFE_default_config;
void TFE_config_load_defaults(TFE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_TIRE_FRICTION_ESTIMATION_TFECONFIG_H */
