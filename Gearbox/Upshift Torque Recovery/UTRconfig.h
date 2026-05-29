#ifndef ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRCONFIG_H
#define ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRCONFIG_H

#include "UTR.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const UTR_Config UTR_default_config;
void UTR_config_load_defaults(UTR_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_UPSHIFT_TORQUE_RECOVERY_UTRCONFIG_H */
