#include "RBAconfig.h"

const RBA_Config RBA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void RBA_config_load_defaults(RBA_Config* cfg) {
    if (cfg) *cfg = RBA_default_config;
}
