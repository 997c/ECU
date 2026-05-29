#include "WLEconfig.h"

const WLE_Config WLE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void WLE_config_load_defaults(WLE_Config* cfg) {
    if (cfg) *cfg = WLE_default_config;
}
