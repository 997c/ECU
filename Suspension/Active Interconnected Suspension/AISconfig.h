#ifndef ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISCONFIG_H
#define ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISCONFIG_H

#include "AIS.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AIS_Config AIS_default_config;
void AIS_config_load_defaults(AIS_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_SUSPENSION_ACTIVE_INTERCONNECTED_SUSPENSION_AISCONFIG_H */
