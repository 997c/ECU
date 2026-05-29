#include "SCCconfig.h"

const SCC_Config SCC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void SCC_config_load_defaults(SCC_Config* cfg) {
    if (cfg) *cfg = SCC_default_config;
}
