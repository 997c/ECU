#include "TQVconfig.h"

const TQV_Config TQV_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TQV_config_load_defaults(TQV_Config* cfg) {
    if (cfg) *cfg = TQV_default_config;
}
