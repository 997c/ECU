#ifndef ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDCONFIG_H
#define ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDCONFIG_H

#include "ARD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARD_Config ARD_default_config;
void ARD_config_load_defaults(ARD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ACTIVE_REAR_DIFFERENTIAL_FULL_AUTO_ARDCONFIG_H */
