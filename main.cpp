#include <iostream>
#include <string>

#include "Pizza.h"
#include "Pizza_Store.h"

using namespace std;

int main()
{
    unsigned int type;
    unsigned int temp;
    
    while (true)
    {
        cout << "Menu: " << endl;
        cout << "1. Cheese Pizza" << endl;
        cout << "2. Greek Pizza" << endl;
        cout << "3. Pepperoni Pizza" << endl;
        cout << "4. Exit" << endl;
        cout << "Choose your pizza: ";
        cin >> type;
        if (type == 4)
        {
            break;
        }
        cout << "---------------------------------" << endl;
        
        Pizza_Store pizzaStore;
        pizzaStore.OrderPizza((Pizza_Type)(type));

        cout << "---------------------------------" << endl;
    }
    return 0;
}