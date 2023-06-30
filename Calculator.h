#ifndef CALCULATOR_H
#define CALCULATOR_H
#define PI 3.14159265358979323846264338
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>
#include <ios>
#include <limits>
#include <cmath>
#include <concepts>
#include <ctype.h>
using namespace std;
using std::string;
// double PI = 3.1415926535897932384626433832795;

class Calculator{
  public :
  Calculator()=default;
  void introduction(){
  cout<<"Welcome To Sukham's Calculator . Plz Select The Type Of Calculator You Want To Use"<<endl;
  cout<<"'A' for Addition"<<"                          |          "<<"'TSA' For calculating the Totale Surface Area"<<endl;
  cout<<"'S' for Subtraction"<<"                       |          "<<"'LSA' For calculating the Lateral Surface Area"<<endl;
  cout<<"'M' for Multiplication"<<"                    |          "<<"'VOL' For calculating the Volume"<<endl;
  cout<<"'D' for Division"<<"                          |          "<<"'AR' For calculating the Plane Area"<<endl;
  cout<<"'P' for Percentage"<<"                        |          "<<"'PER' For calculating the Perimeter"<<endl;
  cout<<"'L' for Logarthmic"<<"                        |          "<<"'U' For Basic Unit Conversions"<<endl;
  cout<<"'SQRT' for Square Root"<<"                    |          "<<"'SQR' For Taking the square of a number"<<endl;
  cout<<"'CU' for Taking the cube of the number"<<"    |          "<<"'CRT' For Cube root of the number"<<endl;
  cout<<"'POW' for Taking the power of on number over another"<<endl;
  }
};
class Basic_Calculator : public Calculator{
  public: 
  string Process;
  double first_number;
  double second_number;
  double number;
  double first_side;
  double second_side;
  double third_side;
  double input_number;
  string unit_converter_process;
  string from_unit;
  string to_unit;
  string shape;
  Basic_Calculator()=default;
  Basic_Calculator(double Input_Number , string Unit_Converter_Process , string From_Unit , string To_Unit){
    from_unit = From_Unit ;
    to_unit = To_Unit ;
    unit_converter_process = Unit_Converter_Process ;
    input_number = Input_Number ;
  }
  Basic_Calculator(string calculator_process){
    Process = calculator_process ;
  }
  Basic_Calculator(string process , double first_num , double second_num){
    first_number = first_num ;
    second_number = second_num ;
    Process = process ;
  }
  Basic_Calculator(string process , double first_num){
    number = first_num ;
    Process = process ;
  }
  Basic_Calculator(string process , string Shape , double lenght , double breadth , double height){
    Process = process ;
    shape = Shape ;
    first_side = lenght ;
    second_side = breadth ; 
    third_side = height ; 
  }
  Basic_Calculator(string process , string Shape , double lenght , double breadth){
    Process = process ;
    shape = Shape ;
    first_side = lenght ;
    second_side = breadth ; 
  }
  Basic_Calculator(string process , string Shape){
    Process = process ;
    shape = Shape ;
  }
  void basic_calculate(){
    if(Process=="A"){
      cout<<"The Addition Gives "<<(first_number + second_number)<<endl;
    }
    else if(Process=="S"){
      cout<<"The Subtraction Gives "<<(first_number-second_number)<<endl;
    }
    else if(Process=="M"){
      cout<<"The Multiplication Gives "<<(first_number*second_number)<<endl;
    }
    else if(Process=="D"){
      cout<<"The Division Gives "<<(first_number/second_number)<<endl;
    }
    else if(Process=="POW"){
      cout<<first_number<<" raises to the power "<<second_number<<" equals to "<<pow(first_number,second_number)<<endl;
    }
    else{
      cout<<"Plz enter The valid Character for the operation u want to do"<<endl;
    }
  }
  void higher_calculate(){
    if(Process=="P"){
      cout<<"The percentage will give "<<(number/100)<<endl;
    }
    else if(Process=="L"){
      cout<<"The Logarthmic Gives "<<(log(number))<<endl;
    }
    else if(Process=="SQRT"){
      cout<<"The square root of "<<number<<" is "<<::sqrt(number)<<endl;
    }
    else if(Process=="SQR"){
      cout<<"The square of "<<number<<" is "<<number*number<<endl;
    }
    else if(Process=="CRT"){
      cout<<"The cube root of "<<number<<" is "<<::cbrt(number)<<endl;
    }
    else if(Process=="CU"){
      cout<<"The Cube of "<<number<<" is "<<number*number*number<<endl;
    }
    else{
      cout<<"Plz enter the valid character for the required operation"<<endl;
    }
  }
  void Property_calculate(){
    if(Process=="TSA"){
      if(shape=="CUBE"){
        cout<<"The Totale Surface Area of The Cube Is "<<(6*first_side*first_side)<<endl;
      }
      else if(shape=="CUBOID"){
        cout<<"The Total Surface Area of The Cuboid Is "<<((2*first_side*second_side) + (2*second_side*third_side) + (2*third_side*first_side))<<endl;
      }
      else if(shape=="SPHERE"){
        cout<<"The Total Surface Area of The Sphere Is "<<(4*PI*first_side*first_side)<<endl;
      }
      else if(shape=="HEMISPHERE"){
        cout<<"The Total Surface Area of The Hemisphere Is "<<(3*PI*first_side*first_side)<<endl;
      }
      else if(shape=="CYLINDER"){
        cout<<"The Total Surface Area of The Cylinder Is "<<((2*PI*first_side*second_side)+(2*PI*first_side*first_side))<<endl;
      }
      else if(shape=="CONE"){
        cout<<"The Total Surface Area of The Cone Is "<<((2*PI*first_side*(((first_side*first_side) + (second_side*second_side)))) + (PI*first_side*first_side))<<endl;
      }
      else{
        cout<<"Plz enter a valid supported shape / Solid"<<endl;
      }
    }
    else if(Process=="VOL"){
      if(shape=="CUBE"){
        cout<<"The Volume of The Cube Is "<<(first_side*first_side*first_side)<<endl;
      }
      else if(shape=="CUBOID"){
        cout<<"The Volume of The Cuboid Is "<<(first_side*second_side*third_side)<<endl;
      }
      else if(shape=="SPHERE"){
        cout<<"The Volume of The Sphere Is "<<((4*PI*first_side*first_side*first_side)/3)<<endl;
      }
      else if(shape=="HEMISPHERE"){
        cout<<"The Volume of The Hemisphere Is "<<((2*PI*first_side*first_side*first_side)/3)<<endl;
      }
      else if(shape=="CYLINDER"){
        cout<<"The Volume of The Cylinder Is "<<(PI*first_side*first_side*second_side)<<endl;
      }
      else if(shape=="CONE"){
        cout<<"The Volume of The Cone Is "<<((PI*first_side*first_side*second_side)/3)<<endl;
      }
      else{
        cout<<"Plz enter a valid supported shape / solid"<<endl;
      }
    }
    else if(Process=="LSA"){
      if(shape=="CUBE"){
        cout<<"The Lateral Surface Area of The Cube Is "<<(4*first_side*first_side)<<endl;
      }
      else if(shape=="CUBOID"){
        cout<<"The Lateral Surface Area of The Cuboid Is "<<((2*second_side*third_side) + (2*third_side*first_side))<<endl;
      }
      else if(shape=="SPHERE"){
        cout<<"Sorry Lateral Surface Area is not defined for Sphere"<<endl;
      }
      else if(shape=="HEMISPHERE"){
        cout<<"The Lateral Surface Area of The Hemisphere Is "<<(2*PI*first_side*first_side)<<endl;
      }
      else if(shape=="CYLINDER"){
        cout<<"The Lateral Surface Area of The Cylinder Is "<<(2*PI*first_side*second_side)<<endl;
      }
      else if(shape=="CONE"){
        cout<<"The Lateral Surface Area of The Cone Is "<<(PI*first_side*(::sqrt((first_side*first_side) + (second_side*second_side))))<<endl;
      }
      else{
        cout<<"Plz enter a valid shape / solid"<<endl;
      }
    }
    else if(Process=="AR"){
      if(shape=="SQUARE"){
        cout<<"The Area of The Square Is "<<(first_side*first_side)<<endl;
      }
      else if(shape=="RECTANGLE"){
        cout<<"The Area of the Rectangle Is "<<(first_side*second_side)<<endl;
      }
      else if(shape=="CIRCLE"){
        cout<<"The Area of the Circle Is "<<(PI*first_side*first_side)<<endl;
      }
      else if(shape=="SEMICIRCLE"){
        cout<<"The Area of The Semicircle Is "<<((PI*first_side*first_side)/2)<<endl;
      }
      else if(shape=="PARALLELOGRAM"){
        cout<<"The Area of The Parallelogram Is "<<(first_side*second_side)<<endl;
      }
      else if(shape=="RHOMBUS"){
        cout<<"The Area of The Rhombus Is "<<(first_side*second_side)<<endl;
      }
      else{
        cout<<"Plz enter a valid shape / solid"<<endl;
      }
    }
    else if(Process=="PER"){
      if(shape=="RECTANGLE"){
        cout<<"The Perimeter of the Rectangle Is "<<(2*(first_side+second_side))<<endl;
      }
      else if(shape=="CIRCLE"){
        cout<<"The Perimeter of the Circle Is "<<(2*PI*first_side)<<endl;
      }
      else if(shape=="SEMICIRCLE"){
        cout<<"The Perimeter of The Semicircle Is "<<((PI*first_side) + (2*first_side))<<endl;
      }
      else if(shape=="SQUARE"){
        cout<<"The Perimeter of the Square Is "<<(4*first_side)<<endl;
      }
      else{
        cout<<"Plz enter a valid shape / solid"<<endl;
      }
    }
  }
  void unit_converter(){
    if(unit_converter_process=="VOL"){
      if(from_unit=="M^3"){
        if(to_unit=="CM^3"){
          cout<<input_number<<" m^3 = "<<input_number*1000000<<" cm^3"<<endl;
        }
        else if(to_unit=="MM^3"){
          cout<<input_number<<" m^3 = "<<input_number*1000000000<<" mm^3"<<endl;
        }
      }
      else if(from_unit=="CM^3"){
        if(to_unit=="M^3"){
          cout<<input_number<<" cm^3 = "<<input_number/1000000<<" m^3"<<endl;
        }
        else if(to_unit=="MM^3"){
          cout<<input_number<<" cm^3 = "<<input_number*1000<<" mm^3"<<endl;
        }
      }
      else if(from_unit=="MM^3"){
        if(to_unit=="M^3"){
          cout<<input_number<<" mm^3 = "<<input_number/1000000000<<" m^3"<<endl;
        }
        else if(to_unit=="CM^3"){
          cout<<input_number<<" mm^3 = "<<input_number/1000<<" cm^3"<<endl;
        }
      }
      else{
        cout<<"Plz enter a valid / supported unit"<<endl;
      }
    }
    else if(unit_converter_process=="AR"){
      if(from_unit=="M^2"){
        if(to_unit=="CM^2"){
          cout<<input_number<<" m^2 = "<<input_number*10000<<" cm^2"<<endl;
        }
        else if(to_unit=="MM^2"){
          cout<<input_number<<" m^2 = "<<input_number*1000000<<" mm^2"<<endl;
        }
      }
      else if(from_unit=="CM^2"){
        if(to_unit=="M^2"){
          cout<<input_number<<" cm^2 = "<<input_number/10000<<" m^2"<<endl;
        }
        else if(to_unit=="MM^2"){
          cout<<input_number<<" cm^2 = "<<input_number*100<<" mm^2"<<endl;
        }
      }
      else if(from_unit=="MM^2"){
        if(to_unit=="M^2"){
          cout<<input_number<<" mm^2 = "<<input_number/1000000000<<" m^2"<<endl;
        }
        else if(to_unit=="CM^2"){
          cout<<input_number<<" mm^2 = "<<input_number/1000<<" cm^2"<<endl;
        }
      }
      else{
        cout<<"Plz enter a valid / supported unit"<<endl;
      }
    }
    else if(unit_converter_process=="PER"){
      if(from_unit=="M"){
        if(to_unit=="CM"){
          cout<<input_number<<" m = "<<input_number*100<<" cm"<<endl;
        }
        else if(to_unit=="MM"){
          cout<<input_number<<" m = "<<input_number*1000<<" mm"<<endl;
        }
      }
      else if(from_unit=="CM"){
        if(to_unit=="M"){
          cout<<input_number<<" cm = "<<input_number/100<<" m"<<endl;
        }
        else if(to_unit=="MM"){
          cout<<input_number<<" cm = "<<input_number*10<<" mm"<<endl;
        }
      }
      else if(from_unit=="MM"){
        if(to_unit=="M"){
          cout<<input_number<<" mm = "<<input_number/1000<<" m"<<endl;
        }
        else if(to_unit=="CM"){
          cout<<input_number<<" mm = "<<input_number/10<<" cm"<<endl;
        }
      }
      else{
        cout<<"Plz enter a valid / supported unit"<<endl;
      }
    }
    else if(unit_converter_process=="CURR"){
      if(from_unit=="RUPEE"){
        if(to_unit=="DOLLAR"){
          cout<<input_number<<" rupee = "<<input_number*0.012<<" dollar"<<endl;
        }
      }
      else if(from_unit=="DOLLAR"){
        if(to_unit=="RUPEE"){
          cout<<input_number<<" dollar = "<<input_number*82.18<<" rupee"<<endl;
        }
      }
      else{
        cout<<"Plz enter a valid / supported unit of currency"<<endl;
      }
    }
  }
  string get_process(){
    return Process;
  }
  string get_shape(){
    return shape;
  } 
};

#endif