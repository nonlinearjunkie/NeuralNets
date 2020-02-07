#include "activations.hpp"


Perceptron::Perceptron(int d,double b)
{
    
        int inp,rand_weight;
        cout<<"Enter the features:"<<endl;
        for (int i=0;i<d;i++)
      {
        
        cin>>inp;
        input.push_back(inp); 
        rand_weight = (rand()%10)+1;
        weights.push_back(rand_weight);
      }
     bias=b;
     dim=d;
    
}

double Perceptron::calc_Sigmoid(double lin_com)
{
    return 1/(1+exp(-(lin_com)));
}

double Perceptron::calc_Tanh(double lin_com)
{
    return std::tanh(lin_com);
}

double Perceptron::calc_Relu(double lin_com)
{
     if(lin_com>=0)
        {
            return lin_com;
        }
        else
        {
            return 0;
        }
}

double Perceptron::calc_Unit_Step(double lin_com)
{
        if(lin_com>=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}



double Perceptron:: activate(double lin_com,activators a)
    {
       switch(a)
       {
           case 1:
             return calc_Sigmoid(lin_com);

           case 2:
             return calc_Tanh(lin_com);

           case 3:
            return calc_Relu(lin_com) ;

           case 4:
             return calc_Unit_Step(lin_com);

           default:
             break;   

        }
        
    }
double Perceptron:: find_activation(activators a)
    {
        double out;
        double linear_comb;
        int sum_of_products=0;
        for (int i=0;i<weights.size();i++)
        {
            sum_of_products+=input[i]*weights[i];
        }
        linear_comb=bias+sum_of_products;
        cout<<"Linear combination of Inputs and Weights with Bias is:"<<linear_comb<<endl;
        out=activate(linear_comb,a);
        return out;
    }
void Perceptron:: show_dim()
    {
        cout<<"The number of features is:"<<dim<<endl;
    }
void Perceptron::show_bias()
    {
        cout<<"The bias for the perceptron is:"<<bias<<endl;
    }
void  Perceptron::show_features()
    {
        cout<<"The input features to the perceptron are:"<<endl;
        for(int i=0;i<dim;i++)
        {
            cout<<input[i]<<endl;
        }
    }
void Perceptron:: show_weights()
    {
        cout<<"The weights of the perceptron are:"<<endl;
        for(int i=0;i<dim;i++)
        {
            cout<<weights[i]<<endl;
        }
    }
    



