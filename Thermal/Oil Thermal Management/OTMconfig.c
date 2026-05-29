#include "OTMconfig.h"

const OTM_Config OTM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void OTM_config_load_defaults(OTM_Config* cfg) {
    if (cfg) *cfg = OTM_default_config;
}
