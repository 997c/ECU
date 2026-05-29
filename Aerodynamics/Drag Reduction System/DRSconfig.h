#ifndef ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSCONFIG_H
#define ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSCONFIG_H

#include "DRS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DRS_Config DRS_default_config;
void DRS_config_load_defaults(DRS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_DRAG_REDUCTION_SYSTEM_DRSCONFIG_H */
