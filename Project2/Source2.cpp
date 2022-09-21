#include <bits/stdc++.h>
#include <chrono>

using namespace std;

#define mul(a, b, c) c=a*b//macro


int main()
{

	/*CLOCK_MONOTONIC represents the absolute elapsed wall-clock time since some arbitrary, fixed point in the past. It isn't affected by changes in the system time-of-day clock.
	clock_gettime(CLOCK_MONOTONIC, ...)*/


	/*float ok1 = 3.1415926f;
	float ok2 = 2.718281f;
	float product1 = 0.0f;*/


	/*double ok3 = 3.1415926;
	double ok4 = 2.718281;
	double product2 = 0.0;*/

	long long ok5 = 31415926ll;
	long long ok6 = 2718281ll;
	long long product3 = 0ll;

	/*int ok7 = 3;
	int ok8 = 2;
	int product4 = 0;*/

	//CLOCK START
	auto start = chrono::steady_clock::now();
	

	for (int i = 0; i < 10000; i++)
	{
		
		//mul(ok1, ok2, product1);              //float

		//mul(ok3, ok4, product2);              //double

		mul(ok5, ok6, product3);                //long long 

		//mul(ok7, ok8, product4);              // int
	}

	
	auto end = chrono::steady_clock::now();
	//CLOCK END

	// calculating total time taken by the program.
	double time_taken =
		chrono::duration_cast<chrono::nanoseconds>(end - start).count();

	cout << "time taken by program  nano : " << fixed << time_taken;

	ofstream file;
	file.open("C:/Users/risc/Desktop/float.txt", std::ios_base::app);
	file << time_taken << "," << "\n";
	file.close();
	return 0;
}

