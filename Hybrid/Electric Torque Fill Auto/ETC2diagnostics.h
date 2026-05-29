#ifndef ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2DIAGNOSTICS_H
#define ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2DIAGNOSTICS_H

#include "ETC2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ETC2_diagnostics_init(void);
void ETC2_diagnostics_run(const ETC2_State* state);
bool ETC2_diagnostics_has_fault(void);
void ETC2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_ELECTRIC_TORQUE_FILL_AUTO_ETC2DIAGNOSTICS_H */
