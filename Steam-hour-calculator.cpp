#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int input;
int D;
int W;
int M;
int Y;

int main() {

    // Interaction

    cout<<"Enter How Many Hours You Played"<<endl;

        cin>>input;

    // Calculation

    Y = (input/24)/365;

    M = ((input/24)%365)/31;

    W = (((input/24)%365)%31)/7;

    D = (((input/24)%365)%31)%7;


    // Output

    cout<<"Year "<<Y<<endl;

    cout<<"Month "<<M<<endl;

    cout<<"Week "<<W<<endl;

    cout<<"Day "<<D<<endl;
}
