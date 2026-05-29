#include "DASconfig.h"

const DAS_Config DAS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DAS_config_load_defaults(DAS_Config* cfg) {
    if (cfg) *cfg = DAS_default_config;
}
