#ifndef ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPCONFIG_H
#define ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPCONFIG_H

#include "CBP.h"

#ifdef __cplusplus
extern "C" {
#endif

extern const CBP_Config CBP_default_config;
void CBP_config_load_defaults(CBP_Config* cfg);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPCONFIG_H */
