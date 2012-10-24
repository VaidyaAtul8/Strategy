#pragma once
#include <iostream>
#include <functional>
#include "Algorithm.h"
class Client
{
public:

	Client(void)
	{
	}

	~Client(void)
	{
	}
	void SetAlgorithm(Algorithm* pAlgo)
	{
		m_pAlgo = pAlgo;
	}

	void Execute(std::function<void()> fnPtr = nullptr)
	{
		if(fnPtr)
			fnPtr();
		else
			m_pAlgo->ExecuteAlgo();
	}

	void ClientAlgo()
	{
		std::cout << "Client's own logic executed" << std::endl;
	}

	void foobar()
	{
		std::cout << "Client's foobar executed " << std::endl;
	}

	void foobar(int a)
	{
		std::cout << "Client::foobar" << a << std::endl;
	}

private :
	Algorithm* m_pAlgo;
};

