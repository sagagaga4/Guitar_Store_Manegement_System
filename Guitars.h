//***GuitarStoreManagement***/
//***_______Guitar.h_____***/
//Includes


#ifndef GUITAR_H
#define GUITAR_H
#include<iostream>
#include<string>
using namespace std;


//Class Decleration


class Guitars{
protected:
    string Brand;
    string Model;
    size_t Year;
    double Price;
public:
    Guitars(string brand,string model,size_t year,double price);
    virtual ~Guitars();
    void virtual getInfo() const;
    double virtual getPrice(double price) const;
};


//Using Polymorphism for guitar inheritance (Classical,Acoustic,Electric)


class ClassicalGuitars : public Guitars{
public:
    ClassicalGuitars(string brand,string model,size_t year,double price);
    void getInfo() const override;
    double getPrice(double price) const override;
};


class AcousticGuitars : public Guitars{
public:
    AcousticGuitars(string brand,string model,size_t year,double price);
    void getInfo() const override;
    double getPrice(double price) const override;
};

class ElectricGuitars : public Guitars{
public:
    ElectricGuitars(string brand,string model,size_t year,double price);
    void getInfo() const override;
    double getPrice(double price) const override;
};

#endif


