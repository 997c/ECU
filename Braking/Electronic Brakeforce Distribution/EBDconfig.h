#ifndef ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDCONFIG_H
#define ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDCONFIG_H

#include "EBD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const EBD_Config EBD_default_config;
void EBD_config_load_defaults(EBD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_ELECTRONIC_BRAKEFORCE_DISTRIBUTION_EBDCONFIG_H */
