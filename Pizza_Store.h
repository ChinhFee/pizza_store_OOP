#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Pizza_Cheese.h"
#include "Pizza_Greek.h"
#include "Pizza_Pepperoni.h"

using namespace std;

class Pizza_Store
{
    public:
        void OrderPizza(string type)
        {
            Pizza pizza;

            if (type == "Cheese") Pizza_Cheese pizza;
            else if (type == "Greek") Pizza_Greek pizza;
            else if (type == "Pepperoni") Pizza_Pepperoni pizza;
            else {
                cout << "The " << type << " pizza is unavailable in our store" << endl;
                return;
            }

            pizza.Prepare();
            pizza.Bake();
            pizza.Cut();
            pizza.Box();
        }
        
};