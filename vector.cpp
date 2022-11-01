#include<iostream>
#include<vector>
using namespace std;

int main()
{
    
    vector<int> v1={1,2,3,4};
    v1.push_back(9);
    v1.pop_back();
    v1.shrink_to_fit();
    
    cout<<v1.capacity()<<endl;
    cout<<v1.size()<<endl;
    

    //insert in array

    vector<int> gv = {1,2,3,4};
    gv.insert(gv.begin()+2,5);
    cout<<gv[0]<<endl;
    //Deleting a element 

    gv.erase(gv.begin());
    cout<<gv[0]<<endl;

    cout<<"iterating a vector array"<<endl;
    for(int i=0;i<gv.size();i++){
        cout<<gv[i]<<endl;;
    }
    gv.insert(gv.begin(),8);

    //itertaing using itr
    cout<<"Itertaing using itr"<<endl;

    for(auto itr = gv.begin();itr != gv.end();++itr)
    {
        cout<<*itr<<endl;
    }
    


}