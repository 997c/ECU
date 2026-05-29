#ifndef ECU_ENGINE_FUEL_INJECTION_CONTROL_FICCONFIG_H
#define ECU_ENGINE_FUEL_INJECTION_CONTROL_FICCONFIG_H

#include "FIC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FIC_Config FIC_default_config;
void FIC_config_load_defaults(FIC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_INJECTION_CONTROL_FICCONFIG_H */
