#include "BLDconfig.h"

const BLD_Config BLD_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void BLD_config_load_defaults(BLD_Config* cfg) {
    if (cfg) *cfg = BLD_default_config;
}
