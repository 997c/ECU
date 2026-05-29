#ifndef ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCCONFIG_H
#define ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCCONFIG_H

#include "TWC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TWC_Config TWC_default_config;
void TWC_config_load_defaults(TWC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_TURBO_WASTEGATE_CONTROL_TWCCONFIG_H */
