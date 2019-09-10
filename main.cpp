// Program created by Mesut Apil
#include <iostream>
#include <iomanip>
using namespace std;

double getWeight();
double getDistance();
double calculateCharges(double,int);
int main(){
    double weight;
    int distance;
    int dds;
    double roundedMultiple;
    double price;
    weight = getWeight();
    distance = getDistance();
    roundedMultiple = ((distance - 1)/500)+1;
    dds = (roundedMultiple * 500);
    price = calculateCharges(weight,dds);
    cout<<"Your Charges Are: $"<<setprecision(4)<<price<<endl;
    return 0;
}
double getWeight(){
    double weight;
    int counter = 0;
    cout<<" Please enter the weight(Kg) of product,It cannot be less than 0 or more than 20 : "<<endl;
    cin>>weight;
    while (weight<=0 || weight>20) {
        cout<<" Invalid Input, Please enter again: "<<endl;
        cin>>weight;
        counter++;
        if (counter == 4) {
            cout<<"Too many invalid attempts, program will exit now";
            exit(EXIT_FAILURE);
        }
    }
    return weight;
}

double getDistance(){
    double distance;
    int distance1;
    int counter = 0;
    cout<<" Please enter the distance(Miles) the package will travel, It cannot be less than 0 or more than 3000 : "<<endl;
    cin>>distance;
    while (distance<=0 || distance>3000) {
        cout<<" Invalid Input, Please enter again: "<<endl;
        cin>>distance;
        counter++;
        if (counter == 4) {
            cout<<"Too many invalid attempts, program will exit now";
            exit(EXIT_FAILURE);
        }
    }
    
    distance1 = distance;
    return distance1;
}

double calculateCharges(double weight,int distance){
    double charge;
    double w = weight;
    int d = distance;
    charge = 0;
    
    while (w<=2) {
        if (d<500) {
            charge = 1.10;
            break;
        }
        if (d>500 && d<=1000) {
            charge = 1.10 * 2;
            break;
        }
        if (d>1000 &&d <=1500){
            charge = 1.10 * 3;
            break;
        }
        if (d>1500 &&d <=2000) {
            charge = 1.10 * 4;
            break;
        }
        if (d>2000 && d<=2500) {
            charge = 1.10 * 5;
            break;
        }
        if (d>2500 && d<=3000) {
            charge = 1.10 * 6;
            break;
        }
    }
    while (w>2 && w<=6) {
        if (d<500) {
            charge = 2.20;
            break;
        }
        if (d>500 && d<=1000) {
            charge = 2.20 * 2;
            break;
        }
        if (d>1000 &&d <=1500){
            charge = 2.20 * 3;
            break;
        }
        if (d>1500 &&d <=2000) {
            charge = 2.20 * 4;
            break;
        }
        if (d>2000 && d<=2500) {
            charge = 2.20 * 5;
            break;
        }
        if (d>2500 && d<=3000) {
            charge = 2.20 * 6;
            break;
        }
    }
    while (w>6 && w<=10) {
        if (d<500) {
            charge = 3.70;
            break;
        }
        if (d>500 && d<=1000) {
            charge = 3.70 * 2;
            break;
        }
        if (d>1000 &&d <=1500){
            charge = 3.70 * 3;
            break;
        }
        if (d>1500 &&d <=2000) {
            charge = 3.70 * 4;
            break;
        }
        if (d>2000 && d<=2500) {
            charge = 3.70 * 5;
            break;
        }
        if (d>2500 && d<=3000) {
            charge = 3.70 * 6;
            break;
        }
    }
    while (w>10&&w<=20) {
        if (d<500) {
            charge = 4.80;
            break;
        }
        if (d>500 && d<=1000) {
            charge = 4.80 * 2;
            break;
        }
        if (d>1000 &&d <=1500){
            charge = 4.80 * 3;
            break;
        }
        if (d>1500 &&d <=2000) {
            charge = 4.80 * 4;
            break;
        }
        if (d>2000 && d<=2500) {
            charge = 4.80 * 5;
            break;
        }
        if (d>2500 && d<=3000) {
            charge = 4.80 * 6;
            break;
        }
    }
    return charge;
}

