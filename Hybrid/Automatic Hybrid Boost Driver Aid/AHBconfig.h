#ifndef ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBCONFIG_H
#define ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBCONFIG_H

#include "AHB.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const AHB_Config AHB_default_config;
void AHB_config_load_defaults(AHB_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBCONFIG_H */
