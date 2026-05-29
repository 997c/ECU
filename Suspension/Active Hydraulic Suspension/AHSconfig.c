#include "AHSconfig.h"

const AHS_Config AHS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AHS_config_load_defaults(AHS_Config* cfg) {
    if (cfg) *cfg = AHS_default_config;
}
