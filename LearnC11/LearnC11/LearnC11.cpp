// LearnC11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>


class A
{
public:
	int		a_;
	void	output(int x, int y)
	{
		std::cout << x << " " << y << std::endl;
	}
};


int main()
{
	A a;
	std::function<void(int, int)> fr = std::bind(&A::output, &a, std::placeholders::_1, std::placeholders::_2);
	fr(1, 2);

	return 0;
}

