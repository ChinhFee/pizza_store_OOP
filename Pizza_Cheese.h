#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Pizza.h"

using namespace std;

class Pizza_Cheese : public Pizza
{
    public:
        Pizza_Cheese(){
            name = "Pizza Pho Mai Ngon Vai Lon";
            dough = "Regular Crust";
            sauce = "Marinara Pizza Sauce";
            topping.push_back("Fresh Mozzarella");
            topping.push_back("Parmesan");
            topping.push_back("Cheddar");
            topping.push_back("Provolone");
        }
};