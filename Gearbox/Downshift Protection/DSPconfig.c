#include "DSPconfig.h"

const DSP_Config DSP_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DSP_config_load_defaults(DSP_Config* cfg) {
    if (cfg) *cfg = DSP_default_config;
}
