#include "DFMconfig.h"

const DFM_Config DFM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DFM_config_load_defaults(DFM_Config* cfg) {
    if (cfg) *cfg = DFM_default_config;
}
