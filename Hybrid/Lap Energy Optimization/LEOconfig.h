#ifndef ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOCONFIG_H
#define ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOCONFIG_H

#include "LEO.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const LEO_Config LEO_default_config;
void LEO_config_load_defaults(LEO_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_LAP_ENERGY_OPTIMIZATION_LEOCONFIG_H */
