#include <opencv2/opencv.hpp>
#include <iostream>


using namespace std;
using namespace cv;
int main()
{
	String folder = "E:\\camelyon16\\dataset_for_training\\level_1\\dataset\\all_tumor\\train\\*.png";
	vector<String> filenames;
	glob(folder, filenames);
	cout << filenames.size() << endl;//to display no of files

	for (size_t i = 0; i < filenames.size(); i++)
	{
		cout << filenames[i] << endl;
		cv::Mat source = cv::imread(filenames[i], 1);
	}

	return 0;
}