#pragma once
#include <iostream>
#include "algorithm.h"
class AlgoB : public Algorithm
{
public:

	AlgoB(void)
	{
	}

	~AlgoB(void)
	{
	}

	void ExecuteAlgo()
	{
		std::cout << "AlgoB Executed" << std::endl;
	}
};

