#include "GBTconfig.h"

const GBT_Config GBT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void GBT_config_load_defaults(GBT_Config* cfg) {
    if (cfg) *cfg = GBT_default_config;
}
