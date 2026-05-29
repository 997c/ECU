#ifndef ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCCONFIG_H
#define ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCCONFIG_H

#include "USC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const USC_Config USC_default_config;
void USC_config_load_defaults(USC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STABILITY_UNDERSTEER_CONTROL_AUTO_USCCONFIG_H */
