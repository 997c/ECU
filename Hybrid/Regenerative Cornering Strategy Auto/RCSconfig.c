#include "RCSconfig.h"

const RCS_Config RCS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void RCS_config_load_defaults(RCS_Config* cfg) {
    if (cfg) *cfg = RCS_default_config;
}
