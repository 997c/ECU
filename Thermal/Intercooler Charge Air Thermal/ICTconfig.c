#include "ICTconfig.h"

const ICT_Config ICT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ICT_config_load_defaults(ICT_Config* cfg) {
    if (cfg) *cfg = ICT_default_config;
}
