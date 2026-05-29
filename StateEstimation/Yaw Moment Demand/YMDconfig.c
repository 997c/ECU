#include "YMDconfig.h"

const YMD_Config YMD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void YMD_config_load_defaults(YMD_Config* cfg) {
    if (cfg) *cfg = YMD_default_config;
}
