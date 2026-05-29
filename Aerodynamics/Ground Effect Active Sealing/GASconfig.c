#include "GASconfig.h"

const GAS_Config GAS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void GAS_config_load_defaults(GAS_Config* cfg) {
    if (cfg) *cfg = GAS_default_config;
}
