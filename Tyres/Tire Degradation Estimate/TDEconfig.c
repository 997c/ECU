#include "TDEconfig.h"

const TDE_Config TDE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TDE_config_load_defaults(TDE_Config* cfg) {
    if (cfg) *cfg = TDE_default_config;
}
