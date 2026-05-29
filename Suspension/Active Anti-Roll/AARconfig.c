#include "AARconfig.h"

const AAR_Config AAR_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AAR_config_load_defaults(AAR_Config* cfg) {
    if (cfg) *cfg = AAR_default_config;
}
