#include "BTMconfig.h"

const BTM_Config BTM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BTM_config_load_defaults(BTM_Config* cfg) {
    if (cfg) *cfg = BTM_default_config;
}
