#ifndef ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPDIAGNOSTICS_H
#define ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPDIAGNOSTICS_H

#include "AGP.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AGP_diagnostics_init(void);
void AGP_diagnostics_run(const AGP_State* state);
bool AGP_diagnostics_has_fault(void);
void AGP_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_AUTOMATIC_GEAR_PROTECTION_AGPDIAGNOSTICS_H */
