#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void cuburi(int n)
{for (int k=n*n*n;k>0;k--) {
        for(int l=k;l*l*l>0;l--) {
        if(l*l*l==k){
        cout<<l*l*l<<" ";
break;}}}}
int main()
{   long n;
    cin >>n;
    cuburi(n);
return 0;}



















    //i'm lost.
