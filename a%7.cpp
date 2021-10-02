#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Unesi broj"<<endl;
    cin>>a;
    if(a % 3 == 0 && a % 7 == 0)
    {
	    cout<<"broj je djeljiv sa 3 i 7";
	}
    if(a % 3 == 0)
    {
    	cout<<"broj je djeljiv sa 3";
    }
	if(a % 7 == 0)
	{
	    cout<<"broj je djeljiv sa 7";
	}
	return 0;
}


