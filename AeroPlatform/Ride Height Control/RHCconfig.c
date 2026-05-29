#include "RHCconfig.h"

const RHC_Config RHC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void RHC_config_load_defaults(RHC_Config* cfg) {
    if (cfg) *cfg = RHC_default_config;
}
