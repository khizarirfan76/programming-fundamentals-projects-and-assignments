#include <iostream>

using namespace std;

double cel_to_fah(){

    double tempCel;

    cout<<"enter temperature in celsius:";

    cin>> tempCel;

    cout<<"the temperature in fahrenheit is:"<<(tempCel*9/5)+32;

}

int main(){

    int choice;
    double tempCel;
    double tempFah;

    cout<<"press 1 for celsius to fahrenheit\
    \nand 2 for fahrenheit to celsius^_^\
    \n\nyour choice:";

    cin>>choice;

    if(choice==1){

    cel_to_fah();

    }

      if(choice==2){

    cout<<"enter temperature in fahrenheit:";

    cin>> tempFah;

    cout<<"the temperature in celsius is:"<<(tempFah-32)*5/9;

    }


}

