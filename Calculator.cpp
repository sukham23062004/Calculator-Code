#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <ios>
#include <limits>
#include <cmath>
#include <concepts>
#include <ctype.h>
#include <bits/stdc++.h>
#include "Calculator.h"
using namespace std;
using std::string;

int main(){
  Calculator calculator1;
  calculator1.introduction();
  double INPUT_NUMBER{};
  string FROM_UNIT{};
  string TO_UNIT{};
  string UNIT_CONVERTER_PROCESS{};
  string calculator_shape{};
  string calculator_process{};
  cin>>calculator_process;
  transform(calculator_process.begin(),calculator_process.end(),calculator_process.begin(),::toupper);
  if(calculator_process=="A"|| calculator_process=="S"|| calculator_process=="M"|| calculator_process=="D"|| calculator_process=="P"|| calculator_process=="L"|| calculator_process=="POW" || calculator_process=="SQR" || calculator_process=="SQRT" || calculator_process=="CU" || calculator_process=="CURT"){}
  else if(calculator_process=="U"){
    cout<<"Enter whether the input number is of which type Area/Volume/Perimeter/Currency"<<endl;
    cout<<"Kindly use 'AR' For Area , 'PER' for Perimeter , 'CURR' for Currency & 'VOL' for Volume"<<endl;
    cin>>UNIT_CONVERTER_PROCESS;
    transform(UNIT_CONVERTER_PROCESS.begin(),UNIT_CONVERTER_PROCESS.end(),UNIT_CONVERTER_PROCESS.begin(),::toupper);
    cout<<"Plz input the number"<<endl;
    cin>>INPUT_NUMBER;
    cout<<"Plz enter the unit from which u want the number to be converted"<<endl;
    cin>>FROM_UNIT;
    transform(FROM_UNIT.begin(),FROM_UNIT.end(),FROM_UNIT.begin(),::toupper);
    cout<<"Plz enter the unit to which u want the number to be converted"<<endl;
    cin>>TO_UNIT;
    transform(TO_UNIT.begin(),TO_UNIT.end(),TO_UNIT.begin(),::toupper);
  }
  else if(calculator_process=="VOL" || calculator_process=="AR" || calculator_process=="TSA" || calculator_process=="LSA" || calculator_process=="PER"){
  cout<<"Plz Select the Shape"<<endl;
  cin>>calculator_shape;
  transform(calculator_shape.begin(),calculator_shape.end(),calculator_shape.begin(),::toupper);
  }

  Basic_Calculator basic_calculator(calculator_process,calculator_shape);
  if(basic_calculator.get_process()=="P" || basic_calculator.get_process()=="L" || basic_calculator.get_process()=="SQRT" || basic_calculator.get_process()=="SQR" || basic_calculator.get_process()=="CU" || basic_calculator.get_process()=="CURT"){
    double number{};
    cout<<"Enter The number "<<endl;
    cin>>number;
    Basic_Calculator basic_calculator1(calculator_process,number);
    basic_calculator1.higher_calculate();
  }
  else if(basic_calculator.get_process()=="AR" || basic_calculator.get_process()=="PER" || basic_calculator.get_process()=="TSA" || basic_calculator.get_process()=="LSA" || basic_calculator.get_process()=="VOL"){
    if(basic_calculator.get_shape()=="CUBE" || basic_calculator.get_shape()=="CYLINDER" || basic_calculator.get_shape()=="CONE" || basic_calculator.get_shape()=="CUBOID" || basic_calculator.get_shape()=="SPHERE" || basic_calculator.get_shape()=="HEMISPHERE"){
      double length{};
      double breadth{};
      double height{};
      string SHAPE{};
      SHAPE = basic_calculator.get_shape();
      cout<<"Enter the lenght / Radius "<<endl;
      cin>>length;
      cout<<"Enter the breadth "<<endl;
      cin>>breadth;
      cout<<"Enter the height "<<endl;
      cin>>height;
      Basic_Calculator basic_calculator3(calculator_process,SHAPE,length,breadth,height);
      basic_calculator3.Property_calculate();
    }
    else{
      double Lenght;
      double Breadth;
      string Shape{};
      Shape=basic_calculator.get_shape();
      cout<<"Enter the lenght "<<endl;
      cin>>Lenght;
      cout<<"Enter the breadth "<<endl;
      cin>>Breadth;
      Basic_Calculator basic_calculator4(calculator_process,Shape,Lenght,Breadth);
      basic_calculator4.Property_calculate();
    }
  }
  else if(basic_calculator.get_process()=="U"){
    Basic_Calculator basic_calculator5(INPUT_NUMBER,UNIT_CONVERTER_PROCESS,FROM_UNIT,TO_UNIT);
    basic_calculator5.unit_converter();
  }
  else if(basic_calculator.get_process()=="A" || basic_calculator.get_process()=="S" || basic_calculator.get_process()=="M" || basic_calculator.get_process()=="D" || basic_calculator.get_process()=="POW"){
    double num1;
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    double num2;
    cout<<"Enter the second number"<<endl;
    cin>>num2;
    Basic_Calculator basic_calculator2(calculator_process,num1,num2);
    basic_calculator2.basic_calculate();
  }
}