//#include"Vector.h"
//
//void test01()
//{
//	vector<int> v1;
//	vector<int> v2(10, 1);
//	vector<int> v3(v2.begin(), v2.end());
//	vector<int> v4(v3);
//	v1 = v4;
//	cout << v1.size() << endl;
//	cout << v1.capacity() << endl;
//	int len = v1.capacity();
//
//	v1.resize(len + 2, 3);
//
//	cout << v1.empty() << endl;
//
//	cout << v1[0] << endl;
//
//	v1.push_back(5);
//	v1.pop_back();
//
//	v1.insert(0, 9);
//	v1.erase(v1.begin());
//	vector<int> v5(5, 2);
//	v1.swap(v5);
//
//}
//#if 0
//int main()
//{
//	test01();
//	return 0;
//}
//#endif