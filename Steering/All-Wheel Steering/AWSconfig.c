#include "AWSconfig.h"

const AWS_Config AWS_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AWS_config_load_defaults(AWS_Config* cfg) {
    if (cfg) *cfg = AWS_default_config;
}
