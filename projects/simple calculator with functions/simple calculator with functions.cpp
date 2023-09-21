#include <iostream>

using namespace std;

double sum(double num1,double num2);

double product(double num1,double num2);

double division(double num1,double num2);

double subtraction(double num1,double num2);

int main(){

    double var1;//operator selector

    double num1,num2;//inputs

    cout<<"first number:";

    cin>>num1;

    cout<<"second number:";

    cin>>num2;

    cout<<"press\
          \n1 for sum\
          \n2 for product\
          \n3 for division\
          \n4 for subtraction\
          \n\nyour choice:";

    cin>>var1;

    if(var1==1)

       {
        sum(num1,num2);
       }

    else if(var1==2)

            {
            product(num1,num2);
            }

    else if(var1==3)

            {
            division(num1,num2);
            }

    else if(var1==4)

            {
            subtraction(num1,num2);
            }

     else
           cout<<"\nwrong input"<<endl;
}

double sum(double num1,double num2){

    cout<<"\nyour answer is:"<<num1+num2<<endl;

}

double product(double num1,double num2){

    cout<<"\nyour answer is:"<<num1*num2<<endl;

}

double division(double num1,double num2){

    cout<<"\nyour answer is:"<<num1/num2<<endl;

}

double subtraction(double num1,double num2){

    cout<<"\nyour answer is:"<<num1-num2<<endl;

}
