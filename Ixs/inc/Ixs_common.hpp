// common 通用于多个库

// 状态
// 结构体

#define IxS_Status_OK                           0x80010000

typedef struct _IxS_bbox_i_
{
    int x;
    int y;
    int w;
    int h;
}IxS_bbox_i;

typedef struct _IxS_bbox_f_
{
    float x;
    float y;
    float w;
    float h;
}IxS_bbox_f;
