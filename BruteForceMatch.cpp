#include <iostream>
#include <string>

void BF(const std::string& x, int m, const std::string& y, int n)
{
    for (int j = 0; j <= n - m; ++j)
    {
        int i;
        for (i = 0; i < m && x[i] == y[i + j]; ++i)
        {
            if (i >= m - 1)
                std::cout << j << std::endl;
        }
    }
}

int main()
{
    std::string x = "GCAGAGAG";
    std::string y = "GCATCGCAGAGAGTATACAGTACG";
    
    int m = x.length();
    int n = y.length();
    
    BF(x, m, y, n);
}