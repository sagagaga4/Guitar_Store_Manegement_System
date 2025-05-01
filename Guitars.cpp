//***GuitarStoreManagement***/
//***_______Guitar.cpp___***/

//Includes

#include"Guitars.h"
#include<iostream>
using namespace std;


//Costructor and Destructor


Guitars::Guitars(string brand,string model,size_t year,double price) : Brand(brand),Model(model),Year(year),Price(price) {}
Guitars::~Guitars(){}

//Defining default output for inside base class functions


double Guitars::getPrice(double price) const {
    return price;
}

void Guitars::getInfo() const{
    cout<<"Information is not available at the moment, try again later on :(\n"<<endl;
}



//Deifining all guitar types functions declaration
//Classical Guitars


ClassicalGuitars::ClassicalGuitars(string brand, string model, size_t year, double price): Guitars(brand,model,year,price){}
    double ClassicalGuitars::getPrice(double price) const {return price;};
    void ClassicalGuitars::getInfo() const{cout<<"<-* Classical Guitar *->\n\n"<<"Brand: "<<Brand<<"\n"<<"Model: "<<Model<<"\n"<<"Year: "<<Year<<"\n"<<"Price: "<<Price<<"$\n\n";
        cout<<"* Importent note! All guitar types must be used kindly, love and care for them so that they will produce the best sound possible!"<<endl;};

//Acoustic Guitars


AcousticGuitars::AcousticGuitars(string brand, string model, size_t year, double price): Guitars(brand,model,year,price){}
    double AcousticGuitars::getPrice(double price) const {return price;};
    void AcousticGuitars::getInfo() const{cout<<"<-* Acoustic Guitar *->\n\n"<<"Brand: "<<Brand<<"\n"<<"Model: "<<Model<<"\n"<<"Year: "<<Year<<"\n"<<"Price: "<<Price<<"$\n\n";
        cout<<"* Importent note! All guitar types must be used kindly, love and care for them so that they will produce the best sound possible!"<<endl;};

//Electric Guitars


ElectricGuitars::ElectricGuitars(string brand, string model, size_t year, double price): Guitars(brand,model,year,price){}
    double ElectricGuitars::getPrice(double price) const {return price;};
    void ElectricGuitars::getInfo() const{cout<<"<-* Electric Guitar *->\n\n"<<"Brand: "<<Brand<<"\n"<<"Model: "<<Model<<"\n"<<"Year: "<<Year<<"\n"<<"Price: "<<Price<<"$\n\n";
        cout<<"* Importent note! All guitar types must be used kindly, love and care for them so that they will produce the best sound possible!"<<endl;};
