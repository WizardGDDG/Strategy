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
		cout << "�������� ������ ������� ��������� ��������:" << endl;
		cout << "1. ������������� ������" << endl;
		cout << "2. �� ����" << endl;
		cout << "3. �� ����������" << endl;
		cin >> choice;
		if (choice == 1)
		{

			cout << "��� ����� 1" << endl;
			FlateRateDelivery f;
			f.calcutateCost();
		}
		if (choice == 2) 
		{
			cout << "��� ����� 2" << endl;
			WeightBasedDelivery w;
			w.calcutateCost();
		}
		if (choice == 3)
		{
			cout << "��� ����� 2" << endl;
			DistanceBasedDelivery d;
			d.calcutateCost();
		}

	}
};

