#ifndef ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFDIAGNOSTICS_H
#define ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFDIAGNOSTICS_H

#include "ABF.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void ABF_diagnostics_init(void);
void ABF_diagnostics_run(const ABF_State* state);
bool ABF_diagnostics_has_fault(void);
void ABF_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_BRAKING_AUTOMATIC_BRAKE_FORCE_ASSIST_ABFDIAGNOSTICS_H */
