#include "VDCconfig.h"

const VDC_Config VDC_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VDC_config_load_defaults(VDC_Config* cfg) {
    if (cfg) *cfg = VDC_default_config;
}
