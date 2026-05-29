#include "TFEconfig.h"

const TFE_Config TFE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TFE_config_load_defaults(TFE_Config* cfg) {
    if (cfg) *cfg = TFE_default_config;
}
