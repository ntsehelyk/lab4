#include<iostream>
#include"park.hpp"
#include "string"
using namespace std;

Park::Park(){

    this->address = "none";
    this->bicycle_path_length  = 0;
    this->entry_price = 0;
    this->square = 0;
    this->amount_of_benches = 0;
    this->amount_of_trees = 0;
    this->path_length = 0;
}
Park::Park(string address, float bicycle_path_length, float entry_price, float amount_of_benches, float amount_of_trees){

    this->address = "none";
    this->bicycle_path_length = 0;
    this->entry_price = 0;
    this->amount_of_benches = 0;
    this->amount_of_trees = 0;
}
Park::Park(string address, float bicycle_path_length, float entry_price, double square, float amount_of_benches, float amount_of_trees, float path_length){

    this->address = "none";
    this->bicycle_path_length  = 0;
    this->entry_price = 0;
    this->square = 0;
    this->amount_of_benches = 0;
    this->amount_of_trees = 0;
    this->path_length = 0;
}
Park::~Park(){
    this->address = "";
    this->bicycle_path_length  = 0;
    this->entry_price = 0;
    this->square = 0;
    this->amount_of_benches = 0;
    this->amount_of_trees = 0;
    this->path_length = 0;
}

string Park::getAddress(){
    return this->address;
}

float Park::getBicycle_path_length(){
    return this->bicycle_path_length;
}

float Park::getEntry_price() {
    return this->entry_price;
}

void Park::PrintAllFields(){
    cout<<"\tAddress:"<<this->address<<endl;
    cout<<"\tBicycle Path Length:"<<this->bicycle_path_length<<endl;
    cout<<"\tEntry Price:"<<this->entry_price<<endl;
    cout<<"\tSquare:"<<this->square<<endl;
    cout<<"\tAmount Of Benches:"<<this->amount_of_benches<<endl;
    cout<<"\tAmount Of Trees:"<<this->amount_of_trees<<endl;
    cout<<"\tPath Length:"<<this->path_length<<endl;
}