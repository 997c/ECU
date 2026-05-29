#include "MGTconfig.h"

const MGT_Config MGT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void MGT_config_load_defaults(MGT_Config* cfg) {
    if (cfg) *cfg = MGT_default_config;
}
