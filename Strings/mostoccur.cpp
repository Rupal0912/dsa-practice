#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str = "raghav  a maths  teaccher maths teacher. he is a DSA mentor as well";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
   
    sort(v.begin(), v.end());
    
        int maxcount=1;
        int count=1;
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]) count++;
            else count =1;
            maxcount = max(maxcount,count);
        }
        cout<<maxcount;
     cout<<endl;
        count=1;
        for(int i=1;i<v.size();i++){
            if(v[i]==v[i-1]) count++;
            else count =1;
            if(count==maxcount){
                cout<<v[i]<<" "<<maxcount<<endl;
            }

        }
}
