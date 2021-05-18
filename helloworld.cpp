#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int>vec;
    int val;
    while(true){
        cin>>val;
        vec.push_back(val);
        if(cin.get()=='\n'){             //This line breaks the infinite loop when enter is pressed. The input should be taken using space.
            break;
        }
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}
