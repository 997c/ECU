#include "ASTconfig.h"

const AST_Config AST_default_config = {
    .param1 = 0.0f,
    .param2 = 0.0f,
    .param3 = 0.0f,
    .enabled = 1
};

void AST_config_load_defaults(AST_Config* cfg) {
    if (cfg) *cfg = AST_default_config;
}
