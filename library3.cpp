#include<iostream>
#include<string>
using namespace std;
int main()
{
int book[5];
int searchID;
cout<<"Enter 5 BookIDS:\n";
for(int i=0;i<5;i++)
{cin>>book[i];
}
cout<<"\n Enter BookID to search:";
cin>>searchID;
for(int i=0;i<5;i++)
{
if (book[i]==searchID)
{
cout<<"book found:";
return 0;
}
}
cout<<"book not found:";
return 0;
}
