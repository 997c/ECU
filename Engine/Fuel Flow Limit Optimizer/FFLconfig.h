#ifndef ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLCONFIG_H
#define ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLCONFIG_H

#include "FFL.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FFL_Config FFL_default_config;
void FFL_config_load_defaults(FFL_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_FUEL_FLOW_LIMIT_OPTIMIZER_FFLCONFIG_H */
