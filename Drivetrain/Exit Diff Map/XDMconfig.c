#include "XDMconfig.h"

const XDM_Config XDM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void XDM_config_load_defaults(XDM_Config* cfg) {
    if (cfg) *cfg = XDM_default_config;
}
