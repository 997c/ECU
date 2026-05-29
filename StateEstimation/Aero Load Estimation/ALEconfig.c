#include "ALEconfig.h"

const ALE_Config ALE_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void ALE_config_load_defaults(ALE_Config* cfg) {
    if (cfg) *cfg = ALE_default_config;
}
