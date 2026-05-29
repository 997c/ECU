#include "YRCconfig.h"

const YRC_Config YRC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void YRC_config_load_defaults(YRC_Config* cfg) {
    if (cfg) *cfg = YRC_default_config;
}
