#ifndef ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVECONFIG_H
#define ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVECONFIG_H

#include "TVE.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const TVE_Config TVE_default_config;
void TVE_config_load_defaults(TVE_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_TORQUE_VECTORING_BY_ELECTRIC_MOTOR_TVECONFIG_H */
