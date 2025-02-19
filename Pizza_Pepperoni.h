#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Pizza.h"

using namespace std;

class Pizza_Pepperoni : public Pizza
{
    public:
        Pizza_Pepperoni(){
            name = "Pizza Xuc Xich Ngon Vai Cut";
            dough = "Thick Crust";
            sauce = "Yummy Pizza Sauce";
            topping.push_back("Fresh Mozzarella");
            topping.push_back("Pepperoni");
            topping.push_back("Bacon");
            topping.push_back("Sausage");
        }
};