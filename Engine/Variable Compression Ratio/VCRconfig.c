#include "VCRconfig.h"

const VCR_Config VCR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VCR_config_load_defaults(VCR_Config* cfg) {
    if (cfg) *cfg = VCR_default_config;
}
