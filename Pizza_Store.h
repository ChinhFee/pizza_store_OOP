#pragma once

#include <iostream>
#include <vector>
#include <string>

#include "Pizza.h"

using namespace std;

class Pizza_Store
{
    public:
        void OrderPizza(){
            Pizza pizza;
            pizza.Prepare();
            pizza.Bake();
            pizza.Cut();
            pizza.Box();
        }
        
};