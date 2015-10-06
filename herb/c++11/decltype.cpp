#include <iostream>
#include <vector>
#include <typeinfo>
#include <map>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 

int main()
{
	// decltype: 从一个变量或表达式中得到类型。 
	auto i = 1;
	decltype(i) ii = 2;
	cout<<ii<<endl;
	decltype(10) a = 3;
	cout<<a<<endl; 
}
