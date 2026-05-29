#include "AFMconfig.h"

const AFM_Config AFM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFM_config_load_defaults(AFM_Config* cfg) {
    if (cfg) *cfg = AFM_default_config;
}
