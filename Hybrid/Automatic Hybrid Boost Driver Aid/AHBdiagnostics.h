#ifndef ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBDIAGNOSTICS_H
#define ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBDIAGNOSTICS_H

#include "AHB.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AHB_diagnostics_init(void);
void AHB_diagnostics_run(const AHB_State* state);
bool AHB_diagnostics_has_fault(void);
void AHB_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_HYBRID_AUTOMATIC_HYBRID_BOOST_DRIVER_AID_AHBDIAGNOSTICS_H */
