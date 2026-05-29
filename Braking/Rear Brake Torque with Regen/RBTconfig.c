#include "RBTconfig.h"

const RBT_Config RBT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void RBT_config_load_defaults(RBT_Config* cfg) {
    if (cfg) *cfg = RBT_default_config;
}
