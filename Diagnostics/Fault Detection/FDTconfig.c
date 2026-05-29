#include "FDTconfig.h"

const FDT_Config FDT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FDT_config_load_defaults(FDT_Config* cfg) {
    if (cfg) *cfg = FDT_default_config;
}
