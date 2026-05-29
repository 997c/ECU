#include "AFDconfig.h"

const AFD_Config AFD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AFD_config_load_defaults(AFD_Config* cfg) {
    if (cfg) *cfg = AFD_default_config;
}
