#ifndef ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDINTEGRATION_H
#define ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDINTEGRATION_H

#include "ecu_bridge.h"
#include "WSD.h"

#ifdef __cplusplus
extern "C" {
#endif

void WSD_integration_init(void);
void WSD_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_TRACTION_WHEEL_SPIN_DETECTION_AUTO_CORRECTION_WSDINTEGRATION_H */
