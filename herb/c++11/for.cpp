#include <iostream>
#include <vector>
#include <map>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 
// for遍历数组，容器，string以及由begin 和end 函数定义的序列。 

int main()
{
	vector<int> a{1, 2, 3, 4};
	for(auto b : a)  
	{
		cout<<b<<endl;	
	} 
	
	map<string, int> m{{"herb", 1}, {"herb1", 2}};
	for(auto c : m)
	{
		cout<<c.first<<"  "<<c.second<<endl;
	}
}
