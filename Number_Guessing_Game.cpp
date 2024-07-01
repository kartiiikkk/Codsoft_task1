#include <iostream>
#include <stdlib.h>
#include<time.h>
using namespace std;
int main() {

     cout<<"\n\t\t\tWelcome to Digit Detective-A number Guessing Game!"<<endl;
     cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
     cout<<"You have to guess a number according to level. You will have limited chances to guess according to the Level you choose.Good Luck!"<<endl;
    
    srand(time(0));
    int a;
    int p;
     cout<< "\nEnter the difficulty level  \n";
        cout<< "1 for easy!\t";
        cout<<"2 for normal!\t";
        cout<<"3 for difficult!\t";
        cout<<"0 for ending the game!\n"<<endl;
    cin>>p;
    while(p==1 || p==2 || p==3){
        if(p==1){
            a=rand()%10+1;
            cout<<"You are playing easy mode, numbers range from 1 to 10 "<<endl;
            cout<<endl;
        }
        else if(p==2){
            a=rand()%100+1;
            cout<<"You are playing normal mode, numbers range from 1 to 100"<<endl;
            cout<<endl;
        }
        else{
            a=rand()%1000+1;
            cout<<"You are playing hard mode, numbers range from 1 to 1000"<<endl;
            cout<<endl;
        }
        
        int n;
        cout<<"Choose a Number ";
        cin>>n;
    
        while(n!=a){
            if(n<a){
                cout<<"\nYour guess is Low."<<endl;
            }
            else{
                cout<<"\nYour guess is High."<<endl;
            }
            cout<<"\nChoose Again ";
            cin>>n;
        }
        cout<<"\nYou got it!, number is : "<<a<<endl;
        cout<<endl;
        
        cout<<"Enter 1 for easy mode,2 for normal mode and 3 for hard mode and any other key to Quit"<<endl;
        cin>>p;
    }
    
    return 0;
}