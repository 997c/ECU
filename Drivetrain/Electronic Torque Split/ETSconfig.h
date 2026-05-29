#ifndef ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSCONFIG_H
#define ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSCONFIG_H

#include "ETS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ETS_Config ETS_default_config;
void ETS_config_load_defaults(ETS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_ELECTRONIC_TORQUE_SPLIT_ETSCONFIG_H */
