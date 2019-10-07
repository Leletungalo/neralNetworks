#ifndef _perceptron
#define _perceptron
#include "vector"
namespace NGLLEL001{
    class perceptron
    {
    private:
        float weight1,weight2;
        int X1,X2;
        float learningRete = 0.1;

    public:
        perceptron(int we1,int we2);
        int guess(int input1,int input2);
        void training(int input1,int input2,int target);
        int sign(float sum);

        ~perceptron();
    };
    

    class train
    {
    private:
        /* data */
    public:
        train(int input1,int input2);
        ~train();
    };
}
#endif