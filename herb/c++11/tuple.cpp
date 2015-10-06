#include <iostream>
#include <algorithm>
#include <vector>
#include <string>>
#include <map>
#include <tuple>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 
// tuple 

int main()
{
	auto p = make_tuple(1, 2, string("herb"), 'c'); // 个数任意 
	cout<<get<0>(p)<<" "<<get<1>(p)<<" "<<get<2>(p)<<" "<<get<3>(p)<<endl;
	
	tuple<int, int ,string>t(12, 34, "one");
	int a = get<0>(t);	
	cout<<a<<endl;
	
	int b, c;
	string str;
	tie(b, c, str) = make_tuple(4, 5, "two");
	cout<<b<<" "<<c<<" "<<str<<endl;
	
	tuple<int, int> dd[3];
	dd[0] = make_tuple(b, c);
	dd[1] = make_tuple(b, c+1);
	dd[2] = make_tuple(b, c+2);
	for(int i = 0; i < 3; i++)
	{
		cout<<get<0>(dd[i])<<"  "<<get<1>(dd[i])<<endl;
	}	
	
}
