#include<iostream>
using namespace std;
main ()
{
    for (int a=1;a<=4;a++)
    {
        for (int b=4;b>=a;b--)
        {
            cout<<" ";
        }
        for (int c=1;c<=a;c++)
        {
            if (a==1)
            cout<<" ";
            else if (a==2 && c==1)
            cout<<" ";
            else
            cout<<"* ";
        }
        for (int d=a;d<=4;d++)
        {
            if (a==1 && a==2)
            cout<<" ";
            else
            cout<<"  ";
        }
        for (int e=1;e<=a;e++)
        {
            if (a==1)
            cout<<" ";
            else if (a==2 && e==1)
            cout<<"  ";
            else
            cout<<"* ";
        }
           
    cout<<endl;
    }
    for (int a=1;a<=9;a++)
    {
        for (int g=1;g<=a;g++)
        {
            cout<<" ";
        }
        for (int h=9;h>=a;h--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    system("color 3c");
 
}
