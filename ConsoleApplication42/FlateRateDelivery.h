#pragma once
#include <iostream>
#include "DeliveryStranegy.h"
using namespace std;
class FlateRateDelivery:DeliveryStranegy
{
public:
	void calcutateCost() override
	{
		cout << "1000ð" << endl;
	}
};

