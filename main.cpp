//***GuitarStoreManagement***/
//***_______MAIN__________***/

//Includes
#include "Guitars.h"
#include "GuitarTemplate.h"
#include <iostream>
using namespace std;

int main()
{
    Store<Guitars*> myStore;
    Guitars* Guitars[]{
        new ClassicalGuitars("Torres","SE114",1893,54679.99),
        new AcousticGuitars("Yamaha","A3R",2021,199.99),
        new ElectricGuitars("Fender","Telecaster",1993,799.99),
    };
    
    for(int i = 0; i < 3; i++){
        Guitars[i]->getInfo();
        Guitars[i]->getPrice(2);
        cout<<endl;
        delete Guitars[i];
    }
    
    cout<<"_____________________________________HAVE YOU SEEN OUR NEW PRODUCTS?__________________________________\n"<<endl;
    
    myStore.addItem(new ElectricGuitars("Gibson", "Les Paul", 1965, 1499.99));
    myStore.addItem(new ClassicalGuitars("Yamaha", "CG192S", 2010, 899.99));
    myStore.addItem(new AcousticGuitars("Taylor", "214ce", 2022, 1299.99));

    myStore.printInventory();

    printTotalValue(myStore);

    return 0;
}
