// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "SAMPLESTANDARDDEVIATION.h"
#include "calculate_ssd.h"


int main()
{
	// my data
	int myData[]={12, 23, 34, 1, 5, 23, 9, 10, 22, 11, 21, 13, 10, 2, 4, 7, 6, 8, 14, 31, 20, 15, 45, 5, 8};
	// partner's data
	int partnersData[] = { 6, 35, 90, 65, 36, 65, 21, 50, 43, 60, 78, 67, 77, 30, 83, 77, 56, 51, 90, 9, 74, 99, 61, 89, 96 };

	double myResult1{ 0.0 };
	double myResult2{ 0.0};
	double partnersResult1{ 0.0 };
	double partnersResult2{ 0.0 };

	double diff1{0.0};
	double diff2{0.0};

	myResult1 = SampleStandardDeviation((sizeof(myData)/sizeof(myData[0])), myData);
	myResult2 = calculate_ssd((sizeof(myData) / sizeof(myData[0])), myData);

	partnersResult1 = SampleStandardDeviation((sizeof(partnersData) / sizeof(partnersData[0])), partnersData);
	partnersResult2 = calculate_ssd((sizeof(partnersData) / sizeof(partnersData[0])), partnersData);

	diff1 = abs(myResult1 - myResult2);
	diff2 = abs(partnersResult1 - partnersResult2);

	if (diff1 < 0.0001)
	{
		std::cout << "The sample standar deviations obtained by using my data, my function and my partner's function calculation match." << std::endl;

	}
	else
		std::cout << "The sample standar deviations obtained by using my data, my function and my partner's function calculation don't match." << std::endl;

	if (diff2 < 0.0001)
	{
		std::cout << "The sample standar deviations obtained by using my partner's data, my function and my other partner's function calculation match." << std::endl;

	}
	else
		std::cout << "The sample standar deviations obtained by using my partner's data, my function and my other partner's function calculation don't match." << std::endl;
		

    return 0;
}






