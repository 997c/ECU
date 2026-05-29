#include "ITCconfig.h"

const ITC_Config ITC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ITC_config_load_defaults(ITC_Config* cfg) {
    if (cfg) *cfg = ITC_default_config;
}
