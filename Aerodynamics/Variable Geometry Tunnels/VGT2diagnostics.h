#ifndef ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2DIAGNOSTICS_H
#define ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2DIAGNOSTICS_H

#include "VGT2.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void VGT2_diagnostics_init(void);
void VGT2_diagnostics_run(const VGT2_State* state);
bool VGT2_diagnostics_has_fault(void);
void VGT2_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_AERODYNAMICS_VARIABLE_GEOMETRY_TUNNELS_VGT2DIAGNOSTICS_H */
