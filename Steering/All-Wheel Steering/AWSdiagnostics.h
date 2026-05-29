#ifndef ECU_STEERING_ALL_WHEEL_STEERING_AWSDIAGNOSTICS_H
#define ECU_STEERING_ALL_WHEEL_STEERING_AWSDIAGNOSTICS_H

#include "AWS.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

void AWS_diagnostics_init(void);
void AWS_diagnostics_run(const AWS_State* state);
bool AWS_diagnostics_has_fault(void);
void AWS_diagnostics_clear(void);

#ifdef __cplusplus
}
#endif

#endif /* ECU_STEERING_ALL_WHEEL_STEERING_AWSDIAGNOSTICS_H */
