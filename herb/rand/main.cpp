
#include <iostream>
#include <vector>
#include <climits>
#include <ctime>
#include <map> 
#include "myRand.h"

using namespace std;

int rand1()
{
	int temp = rand();
	temp <<= 16;
	temp += rand();
	int a = rand();
	if(a & 0x1)
	{
		temp += 1<<15;
	}
	return temp;
}

int main()
{
	map<string, int> m;
	m.insert(pair<string, int>("herb", 2));
	m.insert(pair<string, int>("herb1", 3));
	auto it = m.begin();
	for(; it != m.end(); it++)
	{
		cout<<it->first<<"  "<<it->second<<endl;
	}

	
	
//	vector<int> a(10);
//	cout<<a.size()<<endl;
//	a.clear();
//	cout<<a.size();
//	cout<<LLONG_MIN<<"  "<<LLONG_MAX<<endl;
//	cout<<RAND_MAX<<endl;
//	int min = RAND_MAX;
//	int max = -1;
//	for(int i = 0; i < 100*100; i++)
//	{
//		int temp = rand1();
//		if(min > temp)
//		{
//			min = temp;
//		}
//		else if(max < temp)
//		{
//			max = temp;
//		}
//	}
//	cout<<min<<"  "<<max<<endl;
//	
//	int count = 0;
//	min = RAND_MAX;
//	max = -1;
//	while(count != 1000)
//	{
//		srand(time(NULL));
//		int temp = rand();
//		if(min > temp)
//		{
//			min = temp;
//		}
//		if(max < temp)
//		{
//			max = temp;
//		}
//		count++;
//	}
//	cout<<min<<"  "<<max<<endl;

	
}












