#include "EDLconfig.h"

const EDL_Config EDL_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void EDL_config_load_defaults(EDL_Config* cfg) {
    if (cfg) *cfg = EDL_default_config;
}
