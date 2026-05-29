#include "HISconfig.h"

const HIS_Config HIS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void HIS_config_load_defaults(HIS_Config* cfg) {
    if (cfg) *cfg = HIS_default_config;
}
