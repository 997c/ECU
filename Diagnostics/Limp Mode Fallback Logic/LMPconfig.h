#ifndef ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPCONFIG_H
#define ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPCONFIG_H

#include "LMP.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const LMP_Config LMP_default_config;
void LMP_config_load_defaults(LMP_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_LIMP_MODE_FALLBACK_LOGIC_LMPCONFIG_H */
