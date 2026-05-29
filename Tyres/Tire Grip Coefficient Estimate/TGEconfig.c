#include "TGEconfig.h"

const TGE_Config TGE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TGE_config_load_defaults(TGE_Config* cfg) {
    if (cfg) *cfg = TGE_default_config;
}
