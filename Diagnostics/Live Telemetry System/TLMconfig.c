#include "TLMconfig.h"

const TLM_Config TLM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TLM_config_load_defaults(TLM_Config* cfg) {
    if (cfg) *cfg = TLM_default_config;
}
