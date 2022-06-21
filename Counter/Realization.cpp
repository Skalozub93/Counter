#pragma once
#include <iostream>
#include "Counter.h"
using namespace std;

int main()
{
	Counter a;
	a.SetCurrentMin(1000);
	a.SetCurrentMax(3000);
	a.SetGrowthStep(1500);
	cout << a.GetCurrent();
}