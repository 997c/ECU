#ifndef ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISCONFIG_H
#define ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISCONFIG_H

#include "EIS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EIS_Config EIS_default_config;
void EIS_config_load_defaults(EIS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_ERS_ISOLATION_SAFETY_EISCONFIG_H */
