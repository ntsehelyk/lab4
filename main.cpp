#include <iostream>
#include "park.hpp"

using namespace std;

int main(){
    Park park1;
    Park park2("abv",29, 110, 27, 250);
    Park park3("dfs",34, 134, 27, 45, 76.234, 2522);
    
    cout<<"Park 1:"<<endl;
    park1.PrintAllFields();

    cout<<"Park 2:"<<endl;
    park2.PrintAllFields();

    cout<<"Park 3:"<<endl;
    park3.PrintAllFields();

    return 0;
}