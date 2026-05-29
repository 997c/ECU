#include "VDSconfig.h"

const VDS_Config VDS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VDS_config_load_defaults(VDS_Config* cfg) {
    if (cfg) *cfg = VDS_default_config;
}
