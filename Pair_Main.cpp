#include "bits/stdc++.h"
using namespace std;

int main()
{
    // PAIR? WHAT IS PAIR? .. What should u do if u wanna take 2 inputs like (employeeName , employeeID) ?
    // SEE THE PAIR and LEARN. ==> #include <utility>

    pair<string,int>p1;
    p1.first; // This is the string.
    p1.second; // This is the int.

    // initilization forms :
    pair<int,string>p2(1,"Ahmed");
    cout<<"p2.first : "<<p2.first<<" || p2.second : "<<p2.second<<endl;
    pair<int,string>p3=make_pair(1,"Ahmed");
    cout<<"p3.first : "<<p3.first<<" || p3.second : "<<p3.second<<endl;
    pair<int,string>p4={1,"Ahmed"};
    cout<<"p4.first : "<<p4.first<<" || p4.second : "<<p4.second<<endl;
    // Getting inputs from the user :
//    pair<int,string>p5;
//    cin>>p5.first>>p5.second;
//    cout<<"p5.first : "<<p5.first<<" || p5.second : "<<p5.second<<endl;

    // Pair of 3 inputs : Name,ID,Salary.
    pair< string , pair<int , double> >p6;
    p6.first = "Ahmed"; // Name => String.
    p6.second.first = 1; // ID => int.
    p6.second.second = 12550.50; // Salary => double.
    cout<<"p6.first = Name : "<<p6.first<<" || p6.second.first = ID : "<<p6.second.first
        <<" || p6.second.second = Salary : "<<p6.second.second<<endl;

    cout<<"-----------------------------------\n";

    // Apps between vector and pair :
    vector<pair<int,string>>vp;
    vp.push_back({1,"Menna"});
    vp.push_back(make_pair(2,"Ahmed"));
    vp.push_back(pair<int,string>(3,"Tarek"));
    cout<<"vp[i].first (for loop) : ";
    for(int i=0 ; i<vp.size();i++)
        cout<<vp[i].first<<"  ";
    cout<<endl;
    cout<<"vp[i].second (for loop) : ";
    for(int i=0 ; i<vp.size();i++)
    cout<<vp[i].second<<"  ";
    cout<<endl;
    cout<<"-------\n";
    cout<<"i.first - i.second (for each loop) : "<<endl;
    for(auto i : vp)
        cout<<i.first<<" - "<<i.second<<endl;
    cout<<"-------\n";
    cout<<"itVP->first - itVP->second (for loop with iterator) : "<<endl;
    vector<pair<int,string>>::iterator itVP;
    for(itVP=vp.begin() ; itVP!=vp.end() ; itVP++)
        cout<<itVP->first<<" - "<<itVP->second<<endl;
    return 0;
}
