
#include<bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
#include"showdata.h"
#include"iris practice.h"
#include"multiplelinear.h"
#include"polynomial.h"


using namespace std;

void display()
{
	cout<<"HELLO! WELCOME TO SPL_01\n"<<endl;
}

int main()
{

display();

 int button ;

 cout<<"1.SIMPLE LINEAR REGRESSION"<<endl;
 cout<<"2.LOGISTIC REGRESSION"<<endl;
 cout<<"3.MULTIPLE LINEAR REGRESSION"<<endl;
 cout<<"4.POLYNOMIAL REGRESSION\n"<<endl;
 cout<<"5.Don't know data type (Unsupervised data\n"<<endl;

 cout<<"which type of regression do you want to handle?\n"<<endl;

cout<<"please enter your button"<<endl;
 cin>>button;


    if(button ==1)
    {

        cout<<"welcome to simple linear regression task"<<endl;
        cout<<"Press 1 to continue :"<<endl;
        cout<<"Press 0 to exit program:"<<endl;

        int press2;
        cin>>press2;


        if (press2==1)
        {

   run();

        }
        else if(press2==0)
            exit(0);
    }

 if(button ==2)
    {

        cout<<"welcome to logistic regression task"<<endl;
        cout<<"Press 1 to continue :"<<endl;
        cout<<"Press 0 to exit program:"<<endl;

        int press2;
        cin>>press2;


        if (press2==1)
        {


iris();
test();
        }
        else if(press2==0)
            exit(0);
    }

    if(button ==3)
    {

        cout<<"welcome to multiple linear task"<<endl;
        cout<<"Press 1 to continue :"<<endl;
        cout<<"Press 0 to exit program:"<<endl;

        int press2;
        cin>>press2;


        if (press2==1)
        {

  run1();
        }
        else if(press2==0)
            exit(0);
    }

 if(button ==4)
    {

        cout<<"welcome to polynomial task"<<endl;
        cout<<"Press 1 to continue :"<<endl;
        cout<<"Press 0 to exit program:"<<endl;

        int press2;
        cin>>press2;


        if (press2==1)
        {
              poly_reg(button);
 void calculate_poly_reg(double x1,double x2);

        }
        else if(press2==0)
            exit(0);
    }


}
