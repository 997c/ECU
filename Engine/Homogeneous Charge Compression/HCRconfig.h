#ifndef ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRCONFIG_H
#define ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRCONFIG_H

#include "HCR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const HCR_Config HCR_default_config;
void HCR_config_load_defaults(HCR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_HOMOGENEOUS_CHARGE_COMPRESSION_HCRCONFIG_H */
