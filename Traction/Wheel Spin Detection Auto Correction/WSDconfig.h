#ifndef ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDCONFIG_H
#define ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDCONFIG_H

#include "WSD.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const WSD_Config WSD_default_config;
void WSD_config_load_defaults(WSD_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDCONFIG_H */
