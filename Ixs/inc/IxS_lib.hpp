/*
header
*/

 #ifndef _IXS_LIB_H_
 #define  _IXS_LIB_H_

enum Ixs_state {Ixs_s_OK, Ixs_s_FAIL};
enum Ixs_rule_type {RED, BLUE, WHITE, BLACK};

class Ixs_config
{
    public:
        void Display_config();
};

typedef struct _Ixs_input_info_
{
}Ixs_input_info;

typedef struct _Ixs_output_info_
{
}Ixs_output_info;


class  Ixs_handle
{
    private:
    public:
        Ixs_state Create();
        Ixs_state Create(Ixs_config);
        Ixs_state Config(Ixs_config);
        Ixs_state Process(Ixs_input_info,Ixs_output_info);
};

 #endif
