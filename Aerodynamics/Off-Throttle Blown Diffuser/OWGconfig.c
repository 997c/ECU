#include "OWGconfig.h"

const OWG_Config OWG_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void OWG_config_load_defaults(OWG_Config* cfg) {
    if (cfg) *cfg = OWG_default_config;
}
