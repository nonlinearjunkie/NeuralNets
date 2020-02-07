#include <iostream>
#include <vector>
#include <cmath>   /*exp ,tanh*/
#include <time.h>       /* time */

using namespace std;
enum activators{Sigmoid=1,Tanh=2,Relu=3,Unit_step=4};

class Perceptron
{
    vector<int> input,weights;
    double output,dim;
    double bias;
    public:
           Perceptron(int d,double b);
           double calc_Sigmoid(double lin_com);
           double calc_Tanh(double lin_com);
           double calc_Relu(double lin_com);
           double calc_Unit_Step(double lin_com);
           double activate(double lin_com,activators a);

           double find_activation(activators a);

           void show_dim();

           void show_bias();

           void show_features();

           void show_weights();

};
