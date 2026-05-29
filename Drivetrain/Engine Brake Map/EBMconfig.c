#include "EBMconfig.h"

const EBM_Config EBM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EBM_config_load_defaults(EBM_Config* cfg) {
    if (cfg) *cfg = EBM_default_config;
}
