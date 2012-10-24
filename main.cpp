// Strategy.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Client.h"
#include "AlgoA.h"
#include "AlgoB.h"


int _tmain(int argc, _TCHAR* argv[])
{
	Client cl;
	AlgoA a;
	cl.SetAlgorithm(&a);
	cl.Execute();
	cl.Execute(std::bind(&Client::ClientAlgo,cl));
	auto a1 = [](){std::cout << "In main" << std::endl;};
	cl.Execute(a1);
	
	AlgoB b;
	cl.SetAlgorithm(&b);
	cl.Execute();
	cl.Execute(std::bind(&Client::foobar,cl,std::placeholders::_1));
	cl.Execute(a1);
	return 0;
}

