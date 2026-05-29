#include "MGHconfig.h"

const MGH_Config MGH_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void MGH_config_load_defaults(MGH_Config* cfg) {
    if (cfg) *cfg = MGH_default_config;
}
