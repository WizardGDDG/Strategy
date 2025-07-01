#pragma once
#include <iostream>
#include "FlateRateDelivery.h"
#include "WeightBasedDelivery.h"
#include "DistanceBasedDelivery.h"
using namespace std;
class Order
{
public:
	
	void p()
	{
		int choice = 0;
		cout << "Выберите способ расчета стоимости доставки:" << endl;
		cout << "1. Фиксированная ставка" << endl;
		cout << "2. По весу" << endl;
		cout << "3. По расстоянию" << endl;
		cin >> choice;
		if (choice == 1)
		{

			cout << "Ваш выбор 1" << endl;
			FlateRateDelivery f;
			f.calcutateCost();
		}
		if (choice == 2) 
		{
			cout << "Ваш выбор 2" << endl;
			WeightBasedDelivery w;
			w.calcutateCost();
		}
		if (choice == 3)
		{
			cout << "Ваш выбор 2" << endl;
			DistanceBasedDelivery d;
			d.calcutateCost();
		}

	}
};

