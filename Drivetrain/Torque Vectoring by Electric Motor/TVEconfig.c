#include "TVEconfig.h"

const TVE_Config TVE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TVE_config_load_defaults(TVE_Config* cfg) {
    if (cfg) *cfg = TVE_default_config;
}
