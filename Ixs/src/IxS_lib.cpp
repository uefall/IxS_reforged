#include "IxS_lib.hpp"
#include <iostream>

using namespace std;

Ixs_state Ixs_handle::Create()
{
    cout << "create..." << endl;
    return Ixs_s_OK;
}

Ixs_state Ixs_handle::Create(Ixs_config config)
{
    cout << "create from config" << endl;
    config.Display_config();
    return Ixs_s_OK;
}