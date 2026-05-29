#ifndef ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLCONFIG_H
#define ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLCONFIG_H

#include "AFL.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AFL_Config AFL_default_config;
void AFL_config_load_defaults(AFL_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ACTUATOR_FALLBACK_LOGIC_AFLCONFIG_H */
