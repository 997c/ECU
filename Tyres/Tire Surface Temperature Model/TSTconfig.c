#include "TSTconfig.h"

const TST_Config TST_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TST_config_load_defaults(TST_Config* cfg) {
    if (cfg) *cfg = TST_default_config;
}
