#include "DCTconfig.h"

const DCT_Config DCT_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void DCT_config_load_defaults(DCT_Config* cfg) {
    if (cfg) *cfg = DCT_default_config;
}
