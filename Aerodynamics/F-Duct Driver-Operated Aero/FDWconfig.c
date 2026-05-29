#include "FDWconfig.h"

const FDW_Config FDW_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FDW_config_load_defaults(FDW_Config* cfg) {
    if (cfg) *cfg = FDW_default_config;
}
