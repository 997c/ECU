#include "BKTconfig.h"

const BKT_Config BKT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BKT_config_load_defaults(BKT_Config* cfg) {
    if (cfg) *cfg = BKT_default_config;
}
