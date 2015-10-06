#include <iostream>
#include <algorithm>
#include <vector>
#include <string>>
#include <thread>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

//  Ҫ��֧��c++11������Ҫ��ӱ�����ѡ� -std=c++11 
// thread



void fun()
{
	cout<<"hello"<<endl;	
	sleep(3);
}
struct functor{
	void operator()(int a, int b)
	{
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
	}
}; 

thread_local int j = 0;
void fun1()
{
	j++;
	cout<<"thread_id = "<<this_thread::get_id()<<"  "<<j<<endl;
}

int main()
{
	// ����ִ��������һ�֣��ں���ִ����֮ǰthread�����ܱ����١�
	// ��thread��������ʱ���� joinable()==true�ᵼ��std::terminate()����
	// ���ԣ��� joinable()==falseʱ�����ܹ���������Щ��� joinable() == false��
	
	thread td;  // Ĭ�Ϲ��캯�� 
	cout<<"td.joinable() = "<<boolalpha<<td.joinable()<<endl<<endl;;
	
	thread td1([](){}) ;	
	cout<<"td1.joinable() = "<<boolalpha<<td1.joinable()<<endl; 
	td1.join();  // join��Ϊfalse 
	cout<<"td1.joinable() = "<<boolalpha<<td1.joinable()<<endl<<endl; 
	
	 
	thread td2([](){}) ;	
	cout<<"td2.joinable() = "<<boolalpha<<td2.joinable()<<endl; 
	td2.detach();  // detach��Ϊfalse 
	cout<<"td3.joinable() = "<<boolalpha<<td2.joinable()<<endl;  
	 
	thread t1(fun1);
	sleep(1);
	thread t2(fun1);	
	t1.join();
	t2.join();
}
