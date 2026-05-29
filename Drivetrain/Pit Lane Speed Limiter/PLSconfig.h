#ifndef ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSCONFIG_H
#define ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSCONFIG_H

#include "PLS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const PLS_Config PLS_default_config;
void PLS_config_load_defaults(PLS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_DRIVETRAIN_PIT_LANE_SPEED_LIMITER_PLSCONFIG_H */
