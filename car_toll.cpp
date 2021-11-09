#include <stdio.h>
#include<iostream>
using namespace std;

class toll{

    static int no_of_cars;
    static float amount;
    public:
    toll(){
    cout<<"A car is passed....\n";
    no_of_cars++;
    }
 
    void display(){
        cout<<"\nTotal number of cars.."<<no_of_cars;
        cout<<"\nTotal Amount collected = "<<amount;
    }    
    };

int toll::no_of_cars=0;
float toll::amount=0.0;

int main()
{
    int lane_no,type;
    do{
    cout<<"Enter lane no. (1-5) : ";
    cin>>lane_no;
    } while(lane_no>5);
    do{
    cout<<"Enter type of car (0 for Paying and 1 for Non-Paying) ";
    cin>>type;
    }while(type<0 || type>1);
    toll t;
    
    
    
    return 0;
}