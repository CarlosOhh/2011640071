/* A program to find day of a given date */
#include <iostream>
#include<stdio.h>

using namespace std;

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main()
{
    cout << "Hello World" << endl; 
    int day = dayofweek(19, 9, 2015);
    if(day==0){
        cout << "Domingo" << endl; 
    }
    else if (day==1){
        cout << "Lunes" << endl; 
    }
    else if (day==2){
        cout << "Martes" << endl; 
    }
    else if (day==3){
        cout << "Miércoles" << endl; 
    }
    else if (day==4){
        cout << "Jueves" << endl; 
    }
    else if (day==5){
        cout << "Viernes" << endl; 
    }
    else if (day==6){
        cout << "Sábado" << endl; 
    }
    return 0;
}
