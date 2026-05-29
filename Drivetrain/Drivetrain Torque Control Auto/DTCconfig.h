#ifndef ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCCONFIG_H
#define ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCCONFIG_H

#include "DTC.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DTC_Config DTC_default_config;
void DTC_config_load_defaults(DTC_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_DRIVETRAIN_TORQUE_CONTROL_AUTO_DTCCONFIG_H */
