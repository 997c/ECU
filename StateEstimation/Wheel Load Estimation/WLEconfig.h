#ifndef ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLECONFIG_H
#define ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLECONFIG_H

#include "WLE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const WLE_Config WLE_default_config;
void WLE_config_load_defaults(WLE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STATE_ESTIMATION_WHEEL_LOAD_ESTIMATION_WLECONFIG_H */
