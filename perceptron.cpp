#include "iostream"
#include "perceptron.h"

using namespace NGLLEL001;
using namespace std;

perceptron::perceptron(int we1,int we2):weight1(we1),weight2(we2){}

void perceptron::training(int input1,int input2,int target){
    int newguess = guess(input1,input2);
    int error = target - newguess;
    weight1 += (error * input1) * learningRete;
    weight2 += (error * input2) * learningRete;
}

int perceptron::guess(int input1,int input2){
    float sum = (input1 * weight1) + (input2 * weight2);
    return sign(sum);
}

int perceptron::sign(float sum){
    if (sum >= 0){
        return 1;
    }else{
        return 0;
    }
}

perceptron::~perceptron(){

}

train::train(int input1,int input2){
    int answer = 0;
    if (input1 == 0 && input2 == 0 ){
        answer = 0;
    }else if (input1 == 0 && input2 == 1 ){
        answer = 0;
    }else if (input1 == 1 && input2 == 0 ){
        answer = 0;
    }else if (input1 == 1 && input2 == 1){
        answer = 0;
    }
}

train::~train(){}