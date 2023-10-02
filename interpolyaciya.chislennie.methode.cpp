#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<double> define_sum(double x, double e = pow(10, -6))
{
    const double PI = 3.141592653589793;
    vector<double>  ar_sum;
    double q_n = (-pow(x, 2))/3;
    double a_0 = x;

    double sum_row = a_0;

    int n = 1;

    while (abs(a_0)>e)
    {
        a_0 = q_n*a_0;
        q_n = ((-1)*pow(x, 2)*(2*n+1))/((n+1)*(2*n+3));

        sum_row += a_0;

        n++;
 
    }
    ar_sum.push_back(a_0);
    ar_sum.push_back(n);
    ar_sum.push_back((2/pow(PI, 0.5))*sum_row);
    
    return ar_sum;
    
}

int main()
{
    double a = 0;
    double b = 2;
    double h = (a+b)/5;
    double x;

    for(x = a; x<=b; x+=h)
    {
        vector<double> result = define_sum(x);
        
        cout << "x = " << x << ": ";
        for (size_t i = 0; i < result.size(); i += 3)
        {
            cout << "a_" << i / 3 << "=" << result[i] << ", n_" << i / 3 << "=" << result[i + 1] << ", sum_" << i / 3 << "=" << result[i + 2] << " ";
        }
        cout << endl;
        
    }

    return 0;
}