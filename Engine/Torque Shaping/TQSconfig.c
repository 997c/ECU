#include "TQSconfig.h"

const TQS_Config TQS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TQS_config_load_defaults(TQS_Config* cfg) {
    if (cfg) *cfg = TQS_default_config;
}
