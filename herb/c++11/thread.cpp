#include <iostream>
#include <algorithm>
#include <vector>
#include <string>>
#include <thread>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

//  要想支持c++11，则需要添加编译器选项： -std=c++11 
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
	// 无论执行体是哪一种，在函数执行完之前thread对象不能被销毁。
	// 当thread对象被析构时，且 joinable()==true会导致std::terminate()调用
	// 所以，当 joinable()==false时，才能够析构。那些情况 joinable() == false？
	
	thread td;  // 默认构造函数 
	cout<<"td.joinable() = "<<boolalpha<<td.joinable()<<endl<<endl;;
	
	thread td1([](){}) ;	
	cout<<"td1.joinable() = "<<boolalpha<<td1.joinable()<<endl; 
	td1.join();  // join后，为false 
	cout<<"td1.joinable() = "<<boolalpha<<td1.joinable()<<endl<<endl; 
	
	 
	thread td2([](){}) ;	
	cout<<"td2.joinable() = "<<boolalpha<<td2.joinable()<<endl; 
	td2.detach();  // detach后，为false 
	cout<<"td3.joinable() = "<<boolalpha<<td2.joinable()<<endl;  
	 
	thread t1(fun1);
	sleep(1);
	thread t2(fun1);	
	t1.join();
	t2.join();
}
