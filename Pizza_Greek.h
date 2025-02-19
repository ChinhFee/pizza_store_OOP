#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Pizza.h"

using namespace std;

class Pizza_Greek : public Pizza
{
    public:
        Pizza_Greek(){
            name = "Pizza Hy Lap Ngon Vai Cac";
            dough = "Thin Crust";
            sauce = "Sweet Pizza Sauce";
            topping.push_back("Fresh Mozzarella");
            topping.push_back("Oregano");
            topping.push_back("Olives");
            topping.push_back("Artichokes");
        }
};