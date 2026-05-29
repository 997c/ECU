#include "OVRconfig.h"

const OVR_Config OVR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void OVR_config_load_defaults(OVR_Config* cfg) {
    if (cfg) *cfg = OVR_default_config;
}
