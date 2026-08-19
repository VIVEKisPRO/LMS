#include<iostream>
#include<string>
using namespace std;

class Books {
    private:
    int price;
    uint id;
    public:
    string name;
    void SetPrice(int P){
         price=P;
    }
    int GetPrice(){
        cout<<"Book:"<<name<<"has "<<this->price<< " price."<<endl;
    return price;
    }


};

int main (){
cout<<"Hello ! Vivek Ranjan."<<endl;
Books B;
B.name="GeetaGyan";
B.SetPrice(101);
B.GetPrice();
    return 0;
}