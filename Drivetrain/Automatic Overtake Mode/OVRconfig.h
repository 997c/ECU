#ifndef ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRCONFIG_H
#define ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRCONFIG_H

#include "OVR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const OVR_Config OVR_default_config;
void OVR_config_load_defaults(OVR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_AUTOMATIC_OVERTAKE_MODE_OVRCONFIG_H */
