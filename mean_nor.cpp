#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int tt,i;
    cin>>tt;
    vector<long double>vect2;
    vector<long double>res;
    while(tt--)
    {
        long long int n;
        long double su=0.0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            long long int re1;
            cin>>re1;
            vect2.push_back((long double)re1);
            su+=re1;
        }
        res.push_back(((long double)su/n));
    }
    sort(vect2.begin(),vect2.end());
    sort(res.begin(),res.end());
    vector<long double>resu;
    for(i=0;i<res.size();i++)
    {
        long double su1=0.0;
        for(long long int j=0;j<vect2.size();j++)
        {
            if(res[i]>vect2[j])
            {
                su1+=(res[i]-(long double)vect2[j]);
            }
        }
        resu.push_back((long double)su1);
    }
    sort(resu.begin(),resu.end());
    //cout <<fixed <<setprecision(12) << resu[0];*/
    for(i=0;i<res.size();i++)
    {
        res[i]=res[i]*(-1);
    }
    for(i=0;i<vect2.size();i++)
    {
        vect2[i]=vect2[i]*(-1);
    }
    reverse(vect2.begin(),vect2.end());
    reverse(res.begin(),res.end());
    reverse(resu.begin(),resu.end());
    
    for(i=0;i<res.size();i++)
    {
        long double su1=0.0;
        for(long long int j=0;j<vect2.size();j++)
        {
            if(res[i]>vect2[j])
            {
                su1+=(res[i]-(long double)vect2[j]);
            }
        }
        resu[i]+=(long double)su1;
    }
    sort(resu.begin(),resu.end());
    cout <<fixed <<setprecision(12) << resu[0];
    return 0;
}

