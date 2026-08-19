#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mini{INT_MAX},maxi{INT_MIN};
        for(int i=0;i<n;i++){
            cin>>a[i];
            mini = min(mini,a[i]);
            maxi = max(maxi,a[i]);
        }
        for(int i=0;i<n;i++){
            if(a[i]==mini)
                a[i]=maxi;
            else if(a[i]==maxi)
                a[i]=mini;
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}
