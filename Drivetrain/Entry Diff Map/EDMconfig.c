#include "EDMconfig.h"

const EDM_Config EDM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EDM_config_load_defaults(EDM_Config* cfg) {
    if (cfg) *cfg = EDM_default_config;
}
