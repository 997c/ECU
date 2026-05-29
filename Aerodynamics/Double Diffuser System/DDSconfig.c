#include "DDSconfig.h"

const DDS_Config DDS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DDS_config_load_defaults(DDS_Config* cfg) {
    if (cfg) *cfg = DDS_default_config;
}
