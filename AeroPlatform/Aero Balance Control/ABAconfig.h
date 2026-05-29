#ifndef ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABACONFIG_H
#define ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABACONFIG_H

#include "ABA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ABA_Config ABA_default_config;
void ABA_config_load_defaults(ABA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERO_PLATFORM_AERO_BALANCE_CONTROL_ABACONFIG_H */
