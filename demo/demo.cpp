#include "IxS_lib.hpp"

int main()
{
    Ixs_handle alg_inst;
    Ixs_config base_config;
    alg_inst.Create();
    alg_inst.Create(base_config);
    return 1;
}