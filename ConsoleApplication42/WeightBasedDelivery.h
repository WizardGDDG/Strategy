#pragma once
#include <iostream>
#include "DeliveryStranegy.h"
using namespace std;
class WeightBasedDelivery:DeliveryStranegy
{
private:
	int weight;
public:
	void calcutateCost() override
	{

		cout << "������� ��� ������: ";
		cin >> weight;
		cout << "��������� ��������: " << weight * 10 << " ������";

	}
};

