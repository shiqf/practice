/* #include <iostream> */
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
/* using namespace std; */

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return 1;
    }
    /* imread 根据文件地址读取并加载图片并返回Mat 格式数据 */
    Mat img = imread(argv[1], -1);
    /* cout << img << endl; */
    if (img.empty()) return -1;

    namedWindow("firstOpencvDemo", WINDOW_AUTOSIZE);
    imshow("firstOpencvDemo", img);
    waitKey(0);
    destroyWindow("firstOpencvDemo");

    return 0;
}
