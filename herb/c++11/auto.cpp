#include <iostream>
#include <vector>
#include <typeinfo>
#include <map>

using namespace std;

//  Ҫ��֧��c++11������Ҫ��ӱ�����ѡ� -std=c++11 

int main()
{
	//auto a;  �������auto��Ҫ���ݳ�ʼ�����ʽ���������Ƶ��� 
	auto i = 0;
	cout<<"sizeof(i)"<<" = "<<sizeof(i)<<endl;
	auto d = 1.0;

	// ʹ����������У����ٴ�������� 
	map<string, int>m;
	m.insert(pair<string, int>("herb", 1));
	m.insert(pair<string, int>("herb1", 2));
	auto it = m.begin();
	for(; it != m.end(); it++)
	{
		cout<<it->first<<"  "<<it->second<<endl;	
	} 
	
	
}
