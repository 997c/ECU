#ifndef ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMCONFIG_H
#define ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMCONFIG_H

#include "XDM.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const XDM_Config XDM_default_config;
void XDM_config_load_defaults(XDM_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_EXIT_DIFF_MAP_XDMCONFIG_H */
