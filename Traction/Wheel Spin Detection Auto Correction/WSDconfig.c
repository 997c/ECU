#include "WSDconfig.h"

const WSD_Config WSD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void WSD_config_load_defaults(WSD_Config* cfg) {
    if (cfg) *cfg = WSD_default_config;
}
