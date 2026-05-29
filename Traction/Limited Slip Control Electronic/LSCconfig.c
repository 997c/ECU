#include "LSCconfig.h"

const LSC_Config LSC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void LSC_config_load_defaults(LSC_Config* cfg) {
    if (cfg) *cfg = LSC_default_config;
}
