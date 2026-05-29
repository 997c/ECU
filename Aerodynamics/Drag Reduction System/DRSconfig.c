#include "DRSconfig.h"

const DRS_Config DRS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DRS_config_load_defaults(DRS_Config* cfg) {
    if (cfg) *cfg = DRS_default_config;
}
