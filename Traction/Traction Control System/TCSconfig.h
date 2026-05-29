#ifndef ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSCONFIG_H
#define ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSCONFIG_H

#include "TCS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TCS_Config TCS_default_config;
void TCS_config_load_defaults(TCS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_TRACTION_CONTROL_SYSTEM_TCSCONFIG_H */
