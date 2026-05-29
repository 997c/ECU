#ifndef ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCCONFIG_H
#define ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCCONFIG_H

#include "KNC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const KNC_Config KNC_default_config;
void KNC_config_load_defaults(KNC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_KNOCK_COMBUSTION_CONTROL_KNCCONFIG_H */
