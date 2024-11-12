#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>
int main()
{
    Car objectCar1;
    objectCar1.setBrand("Fiat");
    objectCar1.setModel("Punto");
    objectCar1.setYearModel(2004);
    objectCar1.printData();

    Rectangle *objectRectangle1 = new Rectangle;
    objectRectangle1->setHeight(2);
    objectRectangle1->setWidth(5);
    cout << "Pinta-ala: "<< objectRectangle1->getArea() <<endl << "Ympärysmitta: "<< objectRectangle1->getCircum() <<endl;
    delete objectRectangle1;
    objectRectangle1 = nullptr;

    unique_ptr<Student> objectStudent = make_unique<Student>();
    objectStudent->setName("Juhani");
    objectStudent->setStudentNumber(11);
    objectStudent->setAverage(7);
    cout << "Nimi: "<<objectStudent->getName() <<endl<<"Opiskelijanumero: "<< objectStudent->getStudentNumber() <<endl<< "Keskiarvo: "<< objectStudent->getAverage() <<endl;

    return 0;
}
