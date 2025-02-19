#pragma once

#include <iostream>
#include <string>

#include "Pizza_Cheese.h"
#include "Pizza_Greek.h"
#include "Pizza_Pepperoni.h"

using namespace std;

enum Pizza_Type {
    Cheese = 1,
    Greek,
    Pepperoni
};

class Pizza_Store
{
    public:
        void OrderPizza(Pizza_Type type)
        {
            Pizza *pizza = nullptr;

            switch (type)
            {
            case Cheese:
                pizza = new Pizza_Cheese();
                break;
            case Greek:
                pizza = new Pizza_Greek();
                break;
            case Pepperoni:
                pizza = new Pizza_Pepperoni();
                break;
            default:
                cout << "The type of pizza is unavailable in our store" << endl;
                break;
            }

            if (pizza == nullptr)
            {
                return;
            }
            
            pizza->Prepare();
            pizza->Bake();
            pizza->Cut();
            pizza->Box();

            delete pizza;
        }
        
};