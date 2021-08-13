#include "Ixs_lib.hpp"
#include "Ixs_cfg.hpp"
#include <iostream>
#include <memory>

using namespace std;

// 内部句柄
class Ixs_handle::Ixs_inner
{
    public:
        Ixs_inner()
        {

        }
        ~Ixs_inner()
        {

        }
    private:
        int x;
        int y;
        Ixs_inner_cfg inner_cfg();
};

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

Ixs_state Ixs_handle::Process(Ixs_input_info,Ixs_output_info)
{
    cout << "processing 1 frame" << endl;
    return Ixs_s_OK;
}

Ixs_state Ixs_handle::Config(Ixs_config cfg)
{
    if(cfg.cfg_type == get_cfg)
        cout << "get cfg " << cfg.cfg_type << endl;
        
    else if(cfg.cfg_type == set_cfg)
        cout << "set cfg " << cfg.cfg_type << endl;
    else
        cout << "err" << endl;

    return Ixs_s_OK;
}