#include <iostream>
#include <iomanip>

using namespace std;

// Function declaration
unsigned long long ack(unsigned long long m, unsigned long long n); // use of long long is necessary since it can get very large values

int main()
{
    int count{0};
    int m_max, n_max;

    cout<<"Give int values of m and n (recommended 3 and 5): "<<endl;
    cin>>m_max>>n_max;
    cout<<"Results of Ackerman's function for m="<<m_max<<" and n="<<n_max<<endl;

    for (size_t  m{0}; m<=m_max;++m)
    {
        for (size_t  n{0}; n<=n_max;++n)
        {
            cout<<setw(6)<<ack(m,n);
            count++;
            if (count%5==0)
                cout<<endl;
        }
    }

    return 0;
}

// Function definition
unsigned long long ack(unsigned long long m, unsigned long long n)
{
    if (m==0ULL) return n+1;
    if (m > 0 && n==0ULL) return ack(m-1, 1);
    return ack(m-1, ack(m, n-1));
}
