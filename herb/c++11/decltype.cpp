#include <iostream>
#include <vector>
#include <typeinfo>
#include <map>

using namespace std;

//  Ҫ��֧��c++11������Ҫ��ӱ�����ѡ� -std=c++11 

int main()
{
	// decltype: ��һ����������ʽ�еõ����͡� 
	auto i = 1;
	decltype(i) ii = 2;
	cout<<ii<<endl;
	decltype(10) a = 3;
	cout<<a<<endl; 
}
