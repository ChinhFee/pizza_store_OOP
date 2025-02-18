#pragma once

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Pizza //Abstract class
{
    protected:
        string name;
        string dough;
        string sauce;
        vector<string> topping;

    public:
        virtual void Prepare(){
            cout << "Preparing " << name << endl;
            cout << "Tossing dough..." << endl;
            cout << "Adding sauce..." << endl;
            cout << "Adding toppings: " << endl;
            for (size_t i = 0; i < topping.size(); ++i) {
                cout << "   " << topping[i] << endl;
            }
        }

        virtual void Bake(){
            cout << "Bake for 25 minutes at 250*C" << endl;
        }

        virtual void Cut(){
            cout << "Cutting the pizza into diagonal slices" << endl;
        }

        virtual void Box(){
            cout << "Place pizza in official PizzaStore box" << endl;
        }
};