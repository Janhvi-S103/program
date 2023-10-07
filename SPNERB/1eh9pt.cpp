
#include <iostream>
#include <cmath>

int main() 
{
    int n;
    double sum = 0.0,term;
    std::cout << "Enter the number of terms in the series: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) 
    {
        term = pow(-1, i - 1) * (1.0 / pow(i, 2));
        sum = sum + term;
    }

    std::cout << "The sum of the series with " << n << " terms is: " << sum << std::endl;
    return 0;
}