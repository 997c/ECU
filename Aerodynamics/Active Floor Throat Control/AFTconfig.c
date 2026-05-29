#include "AFTconfig.h"

const AFT_Config AFT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFT_config_load_defaults(AFT_Config* cfg) {
    if (cfg) *cfg = AFT_default_config;
}
