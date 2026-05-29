#include "CVTconfig.h"

const CVT_Config CVT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void CVT_config_load_defaults(CVT_Config* cfg) {
    if (cfg) *cfg = CVT_default_config;
}
