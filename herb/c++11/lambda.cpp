#include <iostream>
#include <algorithm>
#include <vector>
#include <string>>
#include <map>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 

int main()
{
	map<string, int>m{{"herb1", 1}, {"herb2", 2}};
	int a = 2;
	int b = 3;
	for_each(m.begin(), m.end(), [b](pair<string, int> x)
		{ cout<<x.first<<" "<<x.second+b<<endl;}
	);
	
	vector<int> v{1, 2, 3, 4};
	for_each(v.begin(), v.end(), [=](int &x){cout<<x+a<<"  ";});
	cout<<endl;
	for_each(v.begin(), v.end(), [=](int &x)->int{return x+b;});
	cout<<endl;
	
	auto sum = [=](){return a + b;}();
	
	cout<<sum<<endl;
}
