#include <iostream>

class Counter
{
private:
	int current = 0;
	int current_min = 0;
	int current_max = 99999;
	int growth_step = 100;
public:
	Counter();
	Counter(int current1);
    
	void CurrentPlus(int current1);
	void SetCurrentMin(int current_min);
	void SetCurrentMax(int current_max);
	void SetGrowthStep(int growth_step);
	void SetReset();

	int GetCurrent() const;
	int GetCurrentMin() const;
	int GetCurrentMax() const;
	int GetGrowthStep() const;

};

