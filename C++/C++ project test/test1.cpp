#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

template<typename T>
T SumVector(vector<T>& vec)
{
    T res = 0;
    for (size_t i=0; i<vec.size(); i++)
    {
        res += vec[i];
    }
    return res;
}

int main()
{
    vector<int> v = { 1, 2, 3, 4, 5 };
    
    cout << "sum1: " << SumVector(v) << endl;
    cout << "sum2: " << accumulate(v.begin(), v.end(), 0) << endl;
    cout << "sum3: " << accumulate(v.begin(), v.end(), 5) << endl;

    vector<int> a(v.begin()+0,v.begin()+2);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
    return 0;
}