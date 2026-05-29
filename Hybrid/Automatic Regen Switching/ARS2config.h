#ifndef ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2CONFIG_H
#define ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2CONFIG_H

#include "ARS2.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const ARS2_Config ARS2_default_config;
void ARS2_config_load_defaults(ARS2_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_REGEN_SWITCHING_ARS2CONFIG_H */
