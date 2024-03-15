#include <iostream>
using namespace std;

void getTwoValues(int &begin, int &end)
{
    do
    {
        cin >> begin >> end ;
    } while (begin > end);
}
int getNextPrime(int begin, int end)
{
    int i, j;
    int prime;
    for (i = begin + 1; i < prime; i++)
    {
        for (j = 2; j <= (i/2); j++)
        {
            if (i % j == 0)
            {
                break;
            }
                        
        }
        if (j > (i/2))
        {
            prime = i;
            break;
        }
    }
    return prime;
}

int getPrevPrime(int end)
{
    int i, j;
    int prime;
    for (i = end - 1; i > prime; i--)
    {
        for (j = 2; j <= (i/2); j++)
        {
            if (i % j == 0)
            {
                break;
            }
                        
        }
        if (j > (i/2))
        {
            prime = i;
            break;
        }
    }
    return prime;
}