#include "OVCconfig.h"

const OVC_Config OVC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void OVC_config_load_defaults(OVC_Config* cfg) {
    if (cfg) *cfg = OVC_default_config;
}
