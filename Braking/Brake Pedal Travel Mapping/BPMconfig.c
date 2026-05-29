#include "BPMconfig.h"

const BPM_Config BPM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BPM_config_load_defaults(BPM_Config* cfg) {
    if (cfg) *cfg = BPM_default_config;
}
