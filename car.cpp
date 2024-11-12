#include <iostream>
#include <car.h>

using namespace std;

void Car::printData(){
    cout<< "Merkki: "<< brand <<endl<< "Malli: "<< model <<endl<< "Valmistusvuosi: "<< yearModel <<endl;
}
void Car::setBrand(string newBrand){
    brand = newBrand;
}
void Car::setModel(string newModel){
    model = newModel;
}
void Car::setYearModel(int newYearModel){
    yearModel = newYearModel;
}
