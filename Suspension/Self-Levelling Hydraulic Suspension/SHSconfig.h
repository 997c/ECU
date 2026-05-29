#ifndef ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSCONFIG_H
#define ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSCONFIG_H

#include "SHS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const SHS_Config SHS_default_config;
void SHS_config_load_defaults(SHS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_SELF_LEVELLING_HYDRAULIC_SUSPENSION_SHSCONFIG_H */
