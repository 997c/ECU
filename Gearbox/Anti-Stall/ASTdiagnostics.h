#ifndef ECU_GEARBOX_ANTI_STALL_ASTDIAGNOSTICS_H
#define ECU_GEARBOX_ANTI_STALL_ASTDIAGNOSTICS_H

#include "AST.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AST_diagnostics_init(void);
void AST_diagnostics_run(const AST_State* state);
bool AST_diagnostics_has_fault(void);
void AST_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_GEARBOX_ANTI_STALL_ASTDIAGNOSTICS_H */
