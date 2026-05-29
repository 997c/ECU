#ifndef ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSACONFIG_H
#define ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSACONFIG_H

#include "CSA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const CSA_Config CSA_default_config;
void CSA_config_load_defaults(CSA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_COMPRESSOR_SURGE_AVOIDANCE_CSACONFIG_H */
