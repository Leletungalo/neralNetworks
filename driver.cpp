#include "iostream"
#include "perceptron.h"

using namespace std;

int main(){
    NGLLEL001::perceptron leg(0.5,-0.5);
    cout <<  leg.guess(0,0) << endl;
    NGLLEL001::train tr(1,0);
    return 0;
}