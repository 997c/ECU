#include "TWCconfig.h"

const TWC_Config TWC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TWC_config_load_defaults(TWC_Config* cfg) {
    if (cfg) *cfg = TWC_default_config;
}
