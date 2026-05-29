#ifndef ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWCONFIG_H
#define ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWCONFIG_H

#include "FDW.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const FDW_Config FDW_default_config;
void FDW_config_load_defaults(FDW_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_F_DUCT_DRIVER_OPERATED_AERO_FDWCONFIG_H */
