#include "PLSconfig.h"

const PLS_Config PLS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void PLS_config_load_defaults(PLS_Config* cfg) {
    if (cfg) *cfg = PLS_default_config;
}
