#include "RDHconfig.h"

const RDH_Config RDH_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void RDH_config_load_defaults(RDH_Config* cfg) {
    if (cfg) *cfg = RDH_default_config;
}
