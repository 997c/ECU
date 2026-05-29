#ifndef ECU_DIAGNOSTICS_FAULT_DETECTION_FDTCONFIG_H
#define ECU_DIAGNOSTICS_FAULT_DETECTION_FDTCONFIG_H

#include "FDT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FDT_Config FDT_default_config;
void FDT_config_load_defaults(FDT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DIAGNOSTICS_FAULT_DETECTION_FDTCONFIG_H */
