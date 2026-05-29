#include "DTCconfig.h"

const DTC_Config DTC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DTC_config_load_defaults(DTC_Config* cfg) {
    if (cfg) *cfg = DTC_default_config;
}
