#ifndef ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMCONFIG_H
#define ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMCONFIG_H

#include "TLM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TLM_Config TLM_default_config;
void TLM_config_load_defaults(TLM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIVE_TELEMETRY_SYSTEM_TLMCONFIG_H */
