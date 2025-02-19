#include <iostream>
#include <vector>
#include <string>

#include "Pizza.h"
#include "Pizza_Store.h"

using namespace std;

int main()
{
    Pizza_Store pizzaStore;
    pizzaStore.OrderPizza("Greek");
    return 0;
}