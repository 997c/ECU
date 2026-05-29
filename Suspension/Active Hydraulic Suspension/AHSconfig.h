#ifndef ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSCONFIG_H
#define ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSCONFIG_H

#include "AHS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AHS_Config AHS_default_config;
void AHS_config_load_defaults(AHS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_HYDRAULIC_SUSPENSION_AHSCONFIG_H */
