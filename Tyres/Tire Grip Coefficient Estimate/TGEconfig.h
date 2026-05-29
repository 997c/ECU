#ifndef ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGECONFIG_H
#define ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGECONFIG_H

#include "TGE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TGE_Config TGE_default_config;
void TGE_config_load_defaults(TGE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TYRES_TIRE_GRIP_COEFFICIENT_ESTIMATE_TGECONFIG_H */
