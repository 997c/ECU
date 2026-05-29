#include "TYTconfig.h"

const TYT_Config TYT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TYT_config_load_defaults(TYT_Config* cfg) {
    if (cfg) *cfg = TYT_default_config;
}
