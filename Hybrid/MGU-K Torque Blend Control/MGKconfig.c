#include "MGKconfig.h"

const MGK_Config MGK_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void MGK_config_load_defaults(MGK_Config* cfg) {
    if (cfg) *cfg = MGK_default_config;
}
