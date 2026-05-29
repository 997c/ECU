#ifndef ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRCONFIG_H
#define ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRCONFIG_H

#include "VCR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VCR_Config VCR_default_config;
void VCR_config_load_defaults(VCR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_VARIABLE_COMPRESSION_RATIO_VCRCONFIG_H */
