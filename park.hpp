#ifndef Park_h
#define Park_h
#endif

#include <iostream>
#include <string>
using namespace std;

class Park{
protected:
    double square;
    float amount_of_trees;
private:
    string address;
    float bicycle_path_length ;
    float entry_price;
public:
    float amount_of_benches;
    float path_length ;

    Park();
    Park(string, float, float, float, float);
    Park(string, float, float, double, float, float, float);
    ~Park();


    string getAddress();
    float getBicycle_path_length();
    float getEntry_price();

    void PrintAllFields();


};