#include "EBAconfig.h"

const EBA_Config EBA_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EBA_config_load_defaults(EBA_Config* cfg) {
    if (cfg) *cfg = EBA_default_config;
}
