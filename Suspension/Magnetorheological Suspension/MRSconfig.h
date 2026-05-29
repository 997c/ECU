#ifndef ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSCONFIG_H
#define ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSCONFIG_H

#include "MRS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const MRS_Config MRS_default_config;
void MRS_config_load_defaults(MRS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_MAGNETORHEOLOGICAL_SUSPENSION_MRSCONFIG_H */
