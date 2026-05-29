#include "FCSconfig.h"

const FCS_Config FCS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FCS_config_load_defaults(FCS_Config* cfg) {
    if (cfg) *cfg = FCS_default_config;
}
