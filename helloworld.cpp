#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>vec;
    int val;
    while(true){
        cin>>val;
        vec.push_back(val);
        if(cin.get()=='\n'){
            break;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}