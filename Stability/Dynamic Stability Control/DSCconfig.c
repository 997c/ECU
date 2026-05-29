#include "DSCconfig.h"

const DSC_Config DSC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DSC_config_load_defaults(DSC_Config* cfg) {
    if (cfg) *cfg = DSC_default_config;
}
