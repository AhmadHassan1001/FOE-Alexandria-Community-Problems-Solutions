
/**
 * Submission link: https://atcoder.jp/contests/agc001/submissions/50047342
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> L(2*N);
    for(int i = 0;i < 2*N ;i++)
        cin>>L[i];
    sort(L.begin(),L.end());
    int sum = 0;
    for(int i = 0;i < 2*N - 1;i+=2)
        sum += L[i];
    cout<<sum<<endl;
    return 0;
}



