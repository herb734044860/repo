#include <iostream>
#include <vector>
#include <map>

using namespace std;

//  Ҫ��֧��c++11������Ҫ��ӱ�����ѡ� -std=c++11 
// for�������飬������string�Լ���begin ��end ������������С� 

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
