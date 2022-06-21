#include "Counter.h"
using namespace std;
Counter::Counter()
{
	current_min = 0;
	current_max = 99999;
}
Counter::Counter(int current1)
{
	current = current1;
}
void Counter::CurrentPlus(int current1)
{
	current1++;
}
void Counter::SetCurrentMin(int current_min1)
{
	if (current < 0)
	{
		throw "incorrect number";
	}
	current_min = current_min1;
}
void Counter::SetCurrentMax(int current_max1)
{
	if (current_max > 99999)
	{
		throw "incorrect number";
	}
	current_max = current_max1;
}
void Counter::SetGrowthStep(int growth_step)
{
	growth_step++;
}
void Counter::SetReset()
{
	cout << "Counter Reset!" << "\n";

	if (current == current_max)
	{
		current = 0;
	}
}

int Counter::GetCurrent() const 
{
	return current;
}
int Counter::GetCurrentMin() const
{
	return current_min;
}
int Counter::GetCurrentMax() const
{
	return current_max;
}
int Counter::GetGrowthStep() const
{
	return growth_step;
}


//Counter::Counter()
//{
//
//}
//Counter::Counter(int current1)
//{
//	current = current1;
//}
//Counter::Counter(int min, int max)
//{
//	current_min += min;
//	current_max += max;
//}
//Counter::Counter(int step)
//{
//	growth_step += step;
//}

