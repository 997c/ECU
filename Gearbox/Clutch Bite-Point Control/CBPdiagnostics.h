#ifndef ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPDIAGNOSTICS_H
#define ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPDIAGNOSTICS_H

#include "CBP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void CBP_diagnostics_init(void);
void CBP_diagnostics_run(const CBP_State* state);
bool CBP_diagnostics_has_fault(void);
void CBP_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_CLUTCH_BITE_POINT_CONTROL_CBPDIAGNOSTICS_H */
