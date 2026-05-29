#include "FICconfig.h"

const FIC_Config FIC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void FIC_config_load_defaults(FIC_Config* cfg) {
    if (cfg) *cfg = FIC_default_config;
}
