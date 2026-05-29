#include "MRSconfig.h"

const MRS_Config MRS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void MRS_config_load_defaults(MRS_Config* cfg) {
    if (cfg) *cfg = MRS_default_config;
}
