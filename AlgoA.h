#pragma once
#include <iostream>
#include "algorithm.h"
class AlgoA : public Algorithm
{
public:

	AlgoA(void)
	{
	}

	~AlgoA(void)
	{
	}

	void ExecuteAlgo()
	{
		std::cout << "AlgoA Executed" << std::endl;
	}
};

