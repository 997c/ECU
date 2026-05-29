#ifndef ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDCONFIG_H
#define ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDCONFIG_H

#include "BSD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const BSD_Config BSD_default_config;
void BSD_config_load_defaults(BSD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_BRAKE_STEER_DIFFERENTIAL_BRAKING_BSDCONFIG_H */
