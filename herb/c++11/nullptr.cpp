#include <iostream>
#include <vector>
#include <map>

using namespace std;

//  Ҫ��֧��c++11������Ҫ��ӱ�����ѡ� -std=c++11 
// nullptr: ���c++�еĶ����ԡ�NULLʵ������0�����Կ�����int����ָ�� 

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
	
	//int a = nullptr;  // ���벻ͨ����nullptr����ת��Ϊint 
	int b = NULL;   // NULL����ת��Ϊint 
	cout<<b<<endl;
	F(0);   // c++98�У�����ʧ�ܣ��ж����ԡ���c++11�У�����F(int) 
}
