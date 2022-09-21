#include <bits/stdc++.h>
#include <chrono>

using namespace std;

#define mul(a, b, c) c=a*b//macro

// a sample function whose time taken to
// be measured
//void fun_float(void)
//{
//	//are global variables faster than local variables?. the fastest storage are the registers, followed by the caches, 
//	//followed by the ram. the thing about local variables is that the compiler optimizes them to be allocated from the 
//	//	registers if possible, or from the cache if not. this is why local variables are faster.
//	float ok1 = 3.1415926f; //1234567.0f;
//	float ok2 = 2.718281f;//1234.5678f;
//	//float product = 0.0f;
//	float product = ok1 * ok2;
//
//	//product = ok1 * ok2;
//	//ok1* ok2;
//	//printf("product = %f", product);
//}

//void fun_double(void)
//{
//	//Are global variables faster than local variables?. the fastest storage are the registers, followed by the caches, 
//	//followed by the RAM. The thing about local variables is that the compiler optimizes them to be allocated from the 
//	//	registers if possible, or from the cache if not. This is why local variables are faster.
//	double ok1 = 3.1415926; //1234567.0f;
//	double ok2 = 2.718281;//1234.5678f;
//	//float product = 0.0f;
//	double product = ok1 * ok2;
//
//	//product = ok1 * ok2;
//	//ok1* ok2;
//	//printf("Product = %f", product);
//}
//
//void fun_long_long(void)
//{
//	//Are global variables faster than local variables?. the fastest storage are the registers, followed by the caches, 
//	//followed by the RAM. The thing about local variables is that the compiler optimizes them to be allocated from the 
//	//	registers if possible, or from the cache if not. This is why local variables are faster.
//	long long ok1 = 3.1415926; //1234567.0f;
//	long long ok2 = 2.718281;//1234.5678f;
//	//float product = 0.0f;
//	long long product = ok1 * ok2;
//
//	//product = ok1 * ok2;
//	//ok1* ok2;
//	//printf("Product = %f", product);
//}
//
//void fun_int(void)
//{
//	//Are global variables faster than local variables?. the fastest storage are the registers, followed by the caches, 
//	//followed by the RAM. The thing about local variables is that the compiler optimizes them to be allocated from the 
//	//	registers if possible, or from the cache if not. This is why local variables are faster.
//	int ok1 = 3.1415926; //1234567.0f;
//	int ok2 = 2.718281;//1234.5678f;
//	//float product = 0.0f;
//	int product = ok1 * ok2;
//
//	//product = ok1 * ok2;
//	//ok1* ok2;
//	//printf("Product = %f", product);
//}
//look .... check... put timer in fun.
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


	auto start = chrono::steady_clock::now();
	//auto start = chrono::high_resolution_clock::now();

	//fun_float();
	// unsync the i/o of c and c++.
	//ios_base::sync_with_stdio(false);
	for (int i = 0; i < 10000; i++)
	{
		////float product = 0.0f;
		//mul(ok1, ok2, product1);//float

		//mul(ok3, ok4, product2);//double

		mul(ok5, ok6, product3);//long long 

		//mul(ok7, ok8, product4);// int
	}

	//auto end = chrono::high_resolution_clock::now();
	auto end = chrono::steady_clock::now();

	// calculating total time taken by the program.
	double time_taken =
		chrono::duration_cast<chrono::nanoseconds>(end - start).count();

	cout << "time taken by program  nano : " << fixed << time_taken;

	//std::chrono::duration<double> diff = end - start;
	//std::cout << diff.count() << " s\n";

	/*time_taken *= 1e-9;

	cout << "time taken by program is :  " << fixed << time_taken << setprecision(9);*/
	//cout << "time taken by program is : " << fixed << time_taken << setprecision(9);
	//cout << " nano_sec" << endl;
	//cout << " sec" << endl;
	ofstream file;
	file.open("C:/Users/risc/Desktop/float.txt", std::ios_base::app);
	file << time_taken<<"," << "\n";
	file.close();
	return 0;
}

///*  This example prints the time elapsed since the program was invoked.  */
//#include <time.h>
//#include <stdio.h>
//
//double time1, timedif;   /* use doubles to show small values */
//
//void fun()
//{
//	for (unsigned long int i = 0; i < 100000000UL; i++)
//	{
//	}
//}
//
//int main(void)
//{
//	time1 = (double)clock();            /* get initial time */
//	time1 = time1 / CLOCKS_PER_SEC;      /*    in seconds    */
//	//fun();
//	/* call clock a second time */
//	timedif = (((double)clock()) / CLOCKS_PER_SEC) - time1;
//	printf("The elapsed time is %f seconds\n", timedif);
//}

//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//int main() {
//    int a = 20000;
//    int sum = 0;
//
//    clock_t start = clock();
//    for (int i = 0; i < a; i++) {
//        for (int k = 0; k < a; k++)
//            sum += 1;
//    }
//    cout.precision(10);
//    cout << fixed << float(clock() - start) / clocks_per_sec << endl;
//    return 0;
//}
