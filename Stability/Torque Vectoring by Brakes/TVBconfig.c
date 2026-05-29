#include "TVBconfig.h"

const TVB_Config TVB_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TVB_config_load_defaults(TVB_Config* cfg) {
    if (cfg) *cfg = TVB_default_config;
}
