#include "GESconfig.h"

const GES_Config GES_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void GES_config_load_defaults(GES_Config* cfg) {
    if (cfg) *cfg = GES_default_config;
}
