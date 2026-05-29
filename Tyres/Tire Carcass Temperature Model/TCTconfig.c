#include "TCTconfig.h"

const TCT_Config TCT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TCT_config_load_defaults(TCT_Config* cfg) {
    if (cfg) *cfg = TCT_default_config;
}
