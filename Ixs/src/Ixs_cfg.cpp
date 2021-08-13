#include "Ixs_lib.hpp"
#include <iostream>

using namespace std;

class Ixs_inner_cfg
{
    public:
        Ixs_state set_cfg(Ixs_config cfg);
        Ixs_state get_cfg(Ixs_config cfg);
};

void Ixs_config::Display_config()
{
    cout << "config info:" << endl;
}

Ixs_state Ixs_inner_cfg::set_cfg(Ixs_config cfg)
{
    return Ixs_s_OK;
}

Ixs_state Ixs_inner_cfg::get_cfg(Ixs_config cfg)
{
    return Ixs_s_OK;
}