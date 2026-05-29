#ifndef ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCCONFIG_H
#define ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCCONFIG_H

#include "VDC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const VDC_Config VDC_default_config;
void VDC_config_load_defaults(VDC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_MASTER_VEHICLE_DYNAMICS_CONTROLLER_VDCCONFIG_H */
