#include "Ixs_lib.hpp"

#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/videoio.hpp>

using namespace std;
using namespace cv;

int main()
{
    Ixs_handle alg_inst;
    Ixs_config base_config;
    Ixs_input_info in_info;
    Ixs_output_info out_info;

    alg_inst.Create();
    alg_inst.Create(base_config);
    alg_inst.Config(base_config);

    VideoCapture capture("/home/deep_xuke/IxS_reforged/info/test_vid.mp4");
    if (capture.isOpened())
        cout << "vid opened" << endl;
        Mat     frame;
        bool    stop(false);
        int     frame_cnt = 0;
        while(!stop)
        {
            if(!capture.read(frame))
            {
                cout << "no video frame" << endl;
                break;
            }
            frame_cnt++;
            cout << "frame_cnt " << frame_cnt << endl;
            alg_inst.Process(in_info,out_info);
        }
        capture.release();
        cout << "vid released" << endl;

    return 1;
}