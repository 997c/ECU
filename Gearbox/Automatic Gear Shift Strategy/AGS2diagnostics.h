#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2DIAGNOSTICS_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2DIAGNOSTICS_H

#include "AGS2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AGS2_diagnostics_init(void);
void AGS2_diagnostics_run(const AGS2_State* state);
bool AGS2_diagnostics_has_fault(void);
void AGS2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_SHIFT_STRATEGY_AGS2DIAGNOSTICS_H */
