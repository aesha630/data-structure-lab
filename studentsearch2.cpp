#include<iostream>
using namespace std;
int main()
{
int rollNo[5];
int searchRoll;
bool found=false;
cout<<"Enter roll numbers of 5 students:\n";
for(int i=0;i<5;i++)
{
cin>>rollNo[i];
}
cout<<"Enter roll number to search:";
cin>>searchRoll;
for(int i=0;i<5;i++)
{
if(rollNo[i]==searchRoll)
{
found=true;
break;
}
}
if(found)
cout<<"student found";
else 
cout<<"student Not found";
return 0;
}
