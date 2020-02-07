#include <iostream>
#include <vector>
#include <time.h>       /* time */
#include "activations.hpp"

using namespace std;

int main()
{
    double n,output;
    cout<<"Enter no of Input Features:"<<endl;
    cin>>n;
    Perceptron p1(n,-2.7);
    p1.show_dim();
    p1.show_bias();
    p1.show_features();
    p1.show_weights();
    output=p1.find_activation(Relu);
    cout<<"The required activation is:"<<output<<endl;

   
    return 0;
}
