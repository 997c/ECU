#include "FFLconfig.h"

const FFL_Config FFL_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FFL_config_load_defaults(FFL_Config* cfg) {
    if (cfg) *cfg = FFL_default_config;
}
