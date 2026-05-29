#ifndef ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCCONFIG_H
#define ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCCONFIG_H

#include "ETC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ETC_Config ETC_default_config;
void ETC_config_load_defaults(ETC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_ELECTRONIC_THROTTLE_CONTROL_ETCCONFIG_H */
