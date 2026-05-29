#ifndef ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCCONFIG_H
#define ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCCONFIG_H

#include "LSC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const LSC_Config LSC_default_config;
void LSC_config_load_defaults(LSC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_LIMITED_SLIP_CONTROL_ELECTRONIC_LSCCONFIG_H */
