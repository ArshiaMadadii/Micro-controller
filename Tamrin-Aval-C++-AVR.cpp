#include <iostream>
#include <string>
using namespace std;
int main()
{
    int Correct_Password = 1234;
    int b;
    cout<<"Please send your ID  : ";
    cin>>b;
    cout<<"Hi "<<b<<" : ";
    //int Score;
    int number[5];
    for ( int i = 0 ; i < 5 ; i++)
    {
         cout<<"please send Score "<<i+1<<" : ";
         cin>>number[i];
    }
    
    int password;
         cout<<"please send your passwoard  : ";
         cin>>password;
        if (password==Correct_Password) 
        {
                for ( int i =0 ; i <5 ; i++){

            cout<<endl<<"hi "<<b<<" Score list :"<<endl<<number[i];
                }
        }
        else 
            cout<<"Access is not allowed";
    
    // int password;
    // cout<<"please send your passwoard  : ";
    // cin>>password;
    //     if (password==Correct_Password) 
    //     {
    //         cout<<"hi "<<b<<" Score list :"<<endl<<number[i];
    //     }
    //     else 
    //         cout<<"no";
        
    cin.get();
    cin.get();
    return 0 ;
    }