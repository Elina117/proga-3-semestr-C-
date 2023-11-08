#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double define_sum(double x, double e = pow(10, -6))
{
    const double PI = 3.141592653589793;
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
   
    sum_row*=(2/pow(PI, 0.5));
    
    return sum_row;
    
}

double L_n(double x, vector<double> list_x) 
{

    double sum = 0;

    for (int i = 0; i < list_x.size(); i++) {
        double x_i = list_x[i];
        double mult_x = 1;

        for (int j = 0; j < list_x.size(); j++) {
            if (i == j) {
                continue; 
            }

            mult_x *= (x - x_i) / (x_i - list_x[j]);
        }

        sum += define_sum(x_i) * mult_x;
    }

    return sum;
}


int main()
{
    double a = 0;
    double b = 2;
    double h = (b-a)/5;
    double x = a; //табулирование

    vector<double> list_x;

    while(x<=b)
    {
        list_x.push_back(x);
        x+=h;
    }
    for (int i = 0; i < list_x.size(); i++)
    {
        cout << "sum(" << list_x[i] << ") = " << define_sum(list_x[i]) << endl;
    }

    double m = 10;
    double h_ = (b-a)/m;

    double max_diff = 0;
    
    for(int i = 0; i<=m; i++)
    {
        double x_i = i*h_;
        double Ln = L_n(x_i, list_x);
        double erf_x = define_sum(x_i);

        max_diff = max(abs(Ln-erf_x), max_diff);

        cout << "x(" << i << ") : " << x_i << ";" << "Значение L_n(x_" << i << ") : " << Ln << ";" << "Погрешность интерполяции: " << abs(erf_x-Ln) << "\n";

    }

    cout << "Максимальная разница: " << max_diff;
}