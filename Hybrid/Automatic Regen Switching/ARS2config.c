#include "ARS2config.h"

const ARS2_Config ARS2_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARS2_config_load_defaults(ARS2_Config* cfg) {
    if (cfg) *cfg = ARS2_default_config;
}
