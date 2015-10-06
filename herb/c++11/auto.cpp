#include <iostream>
#include <vector>
#include <typeinfo>
#include <map>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 

int main()
{
	//auto a;  编译出错，auto需要根据初始化表达式进行类型推导。 
	auto i = 0;
	cout<<"sizeof(i)"<<" = "<<sizeof(i)<<endl;
	auto d = 1.0;

	// 使用与迭代器中，减少代码的输入 
	map<string, int>m;
	m.insert(pair<string, int>("herb", 1));
	m.insert(pair<string, int>("herb1", 2));
	auto it = m.begin();
	for(; it != m.end(); it++)
	{
		cout<<it->first<<"  "<<it->second<<endl;	
	} 
	
	
}
