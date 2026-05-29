#include "OGSconfig.h"

const OGS_Config OGS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void OGS_config_load_defaults(OGS_Config* cfg) {
    if (cfg) *cfg = OGS_default_config;
}
