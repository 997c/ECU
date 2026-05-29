#include "TPMconfig.h"

const TPM_Config TPM_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void TPM_config_load_defaults(TPM_Config* cfg) {
    if (cfg) *cfg = TPM_default_config;
}
