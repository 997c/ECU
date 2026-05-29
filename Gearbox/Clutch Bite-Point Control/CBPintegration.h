#ifndef ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPINTEGRATION_H
#define ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPINTEGRATION_H

#include "ecu_bridge.h"
#include "CBP.h"

#ifdef __cplusplus
extern "C" {
#endif

void CBP_integration_init(void);
void CBP_integration_update(float dt_ms, const ECU_BridgeState* bridge, ActuatorCommands* out);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPINTEGRATION_H */
