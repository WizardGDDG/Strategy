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
		
		cout << "Введите расстояние до пункта выдачи: ";
		cin >> distance;
		cout <<" Стоимость доставки: " << distance * 15 << " рублей";
		
	}
};

