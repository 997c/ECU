#ifndef ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTCONFIG_H
#define ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTCONFIG_H

#include "DCT.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const DCT_Config DCT_default_config;
void DCT_config_load_defaults(DCT_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_DUAL_CLUTCH_TRANSMISSION_DCTCONFIG_H */
