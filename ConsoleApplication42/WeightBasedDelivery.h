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

		cout << "Введите вес товара: ";
		cin >> weight;
		cout << "Стоимость доставки: " << weight * 10 << " рублей";

	}
};

