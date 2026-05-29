#include "VTGconfig.h"

const VTG_Config VTG_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void VTG_config_load_defaults(VTG_Config* cfg) {
    if (cfg) *cfg = VTG_default_config;
}
