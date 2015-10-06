#include <iostream>
#include <vector>
#include <map>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 
// nullptr: 解决c++中的二义性。NULL实际上是0，可以看出是int或者指针 

void F(int a)
{
	cout<<a<<endl;
}
void F(int *p)
{
	if(p != NULL)
	{
		cout<<*p<<endl;
	}	
	else 
		cout<<"error"<<endl;
} 

int main()
{
	int *q = NULL;
	F(q);
	int *p = nullptr;
	F(p);
	
	//int a = nullptr;  // 编译不通过，nullptr不能转换为int 
	int b = NULL;   // NULL可以转换为int 
	cout<<b<<endl;
	F(0);   // c++98中，编译失败，有二义性。在c++11中，调用F(int) 
}
