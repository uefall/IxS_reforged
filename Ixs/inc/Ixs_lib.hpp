/*
header
*/
#ifndef _IXS_LIB_H_
#define _IXS_LIB_H_

#include <memory>

enum Ixs_state {Ixs_s_OK, Ixs_s_FAIL};
enum Ixs_rule_type {RED, BLUE, WHITE, BLACK};
enum Ixs_cfg_type {get_cfg, set_cfg};

class Ixs_config
{
    public:
        Ixs_cfg_type cfg_type=get_cfg;
        void Display_config();
};

typedef struct _Ixs_input_info_
{
}Ixs_input_info;

typedef struct _Ixs_output_info_
{
}Ixs_output_info;

// api only
class Ixs_handle
{
    private:
        class Ixs_inner;
        // std::unique_ptr<Ixs_inner> imp=nullptr;
    public:
        Ixs_state Create();
        Ixs_state Create(Ixs_config);
        Ixs_state Config(Ixs_config);
        Ixs_state Process(Ixs_input_info,Ixs_output_info);
};

 #endif
