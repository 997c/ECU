#ifndef ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBACONFIG_H
#define ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBACONFIG_H

#include "HBA.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const HBA_Config HBA_default_config;
void HBA_config_load_defaults(HBA_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_HYDRAULIC_BRAKE_ASSIST_HBACONFIG_H */
