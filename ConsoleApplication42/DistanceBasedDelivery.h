#pragma once
#include <iostream>
#include "DeliveryStranegy.h"
using namespace std;
class DistanceBasedDelivery:DeliveryStranegy
{
private:
	int distance;
public:

	void calcutateCost() override
	{
		
		cout << "������� ���������� �� ������ ������: ";
		cin >> distance;
		cout <<" ��������� ��������: " << distance * 15 << " ������";
		
	}
};

