#ifndef ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCCONFIG_H
#define ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCCONFIG_H

#include "APC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const APC_Config APC_default_config;
void APC_config_load_defaults(APC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_ENGINE_PRE_CHAMBER_IGNITION_CONTROL_APCCONFIG_H */
