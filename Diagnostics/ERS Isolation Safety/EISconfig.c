#include "EISconfig.h"

const EIS_Config EIS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EIS_config_load_defaults(EIS_Config* cfg) {
    if (cfg) *cfg = EIS_default_config;
}
