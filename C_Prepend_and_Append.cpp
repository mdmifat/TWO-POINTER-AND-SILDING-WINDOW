#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;

while(t--){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int i=0;
    int j=s.size()-1;
    int ind1=-1;
    int ind2=-2;
    while(i<=j){
       if(s[i]==s[j]){
        ind1=i;
        ind2=j;
        break;
       }
       i++;
       j--;
    }
    
    int count=0;
    for(int i=ind1;i<=ind2;i++){
      count++;  
    }

    cout<<count<<endl;
}


    return 0;
}