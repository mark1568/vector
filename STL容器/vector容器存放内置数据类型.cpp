//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm> //标准算法的头文件
//
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//第一种方式遍历
//	//通过迭代器访问容器内容
//	vector<int>::iterator itBegin = v.begin();//起始迭代器：指向容器中第一个元素
//	vector<int>::iterator itEnd = v.end();//结束迭代器：指向容器最后一个元素的下一位
//
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//第二种方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种
//	//利用STL提供的遍历方法
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}