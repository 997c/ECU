#ifndef ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISCONFIG_H
#define ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISCONFIG_H

#include "HIS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const HIS_Config HIS_default_config;
void HIS_config_load_defaults(HIS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_HYDRAULIC_INTERCONNECTED_SUSPENSION_HISCONFIG_H */
