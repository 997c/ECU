#include "DLGconfig.h"

const DLG_Config DLG_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DLG_config_load_defaults(DLG_Config* cfg) {
    if (cfg) *cfg = DLG_default_config;
}
