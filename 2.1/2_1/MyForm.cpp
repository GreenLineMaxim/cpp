#include "MyForm.h"
#include <cstdlib> 
#include <iostream> 
#include <string>
#include <tuple>

using namespace System;
using namespace System::Windows::Forms;

std::tuple<int, int, int> find_points(int n){
    int i, j, k, nt, nb, n_res, ic, jc;
    setlocale(0, "");

    //n = 10; //возможно нужен ввод этой переменной
    double* x = new double[n + 1];
    double* y = new double[n + 1];
    int check[200][200];
    double a, b;
    for (i = 0; i < 100; i++)
        for (j = 0; j < 100; j++)
            check[i][j] = 0;
    //cout << "Входной массив" << endl;
    for (i = 0; i <= n; i++)
    {
        x[i] = 20 - 0.001 * rand();
        y[i] = 20 - 0.001 * rand();
        //cout << i << "  " << x[i] << " " << y[i] << endl;
    }
    //Перебор точек
    n_res = 1E20;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (!(i == j) && !(check[i][j] == 1))
            {
                check[i][j] = 1; check[j][i] = 1;
                //Уравнение прямой
                if (!(x[i] == x[j])) { a = (y[j] - y[i]) / (x[j] - x[i]); b = y[i] - a * x[i]; }//Прямая не параллельна оси 0у.
                //Подсчет точек 
                nt = 0; nb = 0;
                for (k = 0; k <= n; k++)
                {
                    if (!(k == i) && !(k == j))
                    {
                        if (y[k] > a * x[k] + b && !(x[i] == x[j])) nt++;
                        if (y[k] < a * x[k] + b && !(x[i] == x[j])) nb++;
                        if (x[i] == x[j] && x[k] < x[i]) nb++;
                        if (x[i] == x[j] && x[k] > x[i]) nb++;
                    }
                }
                //cout<<i<<" "<<j<<" "<<nt<<" "<<nb<<endl;
                if (abs(nt - nb) < n_res)
                {
                    n_res = abs(nt - nb);
                    ic = i; jc = j;
                }
            }
        }
    }
    //std::cout << "превая точка № " << ic << " вторая точка № " << jc << " разница в точках " << n_res << std::endl;
    return { ic, jc, n_res };
}
[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    My21::MyForm form;
    Application::Run(% form);
}

