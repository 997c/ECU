#include "KNCconfig.h"

const KNC_Config KNC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void KNC_config_load_defaults(KNC_Config* cfg) {
    if (cfg) *cfg = KNC_default_config;
}
