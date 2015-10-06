 #include "myRand.h"

 
 int myRand(long long min, long long max, int number, vector<long long> &result)
 {
 	result.clear();
 	if(min > max)
 	{
 		swap<long long>(min, max);
	}
	long long temp = max - min;
	long long b = temp;
	int a = 0;
	if(b > RAND_MAX)
	{
		while(b != 0)
		{
			b >>= 16;
			a++;
		}
	}
 	for(int i = 0; i < number; i++)
 	{
 			
	}
 	
 	return 1;
 }
 
 long long _rand(int a)
 {
 	long long result = rand();
 	int b = 1;
 	int bit = 16;
 	while(b != a)
 	{
 		b++;
 		result <<= bit;
 		result += rand();
 		if(rand() & 0x1)
 		{
 			result += 1<<(bit - 1);	
		}
	}
	return result;
 }
 
 template<class T>
 void swap(T &a, T &b)
 {
 	T temp = a;
 	a = b;
 	b = temp;
 }
