#include "ARSconfig.h"

const ARS_Config ARS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ARS_config_load_defaults(ARS_Config* cfg) {
    if (cfg) *cfg = ARS_default_config;
}
