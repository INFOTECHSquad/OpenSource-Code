#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, p;
        srand(time(0));
        a = rand()%20 + 1;

    cout<<"Game is between you and Lisa"<<endl;
    cout<<"Game Rule:pick 1, 2, 3 or 4 matchstick"<<endl;
    cout<<"Who pick last matchstick will be loose"<<endl;
    cout<<"If number of matchstick you choose is greater then the number of matchstick that is present in real then you loose"<<endl;
    cout<<endl<<"----------------------------------------------------------"<<endl;

    while(a--){
        cout<<"Its your turn"<<endl;
        cout<<"Pick matchstick(at max 3)"<<endl;
        cin>>p;
        if((a-p)>0){
            a=a-p;    
        }

        if(a-p<0){
            cout<<"Oops!!"<<endl<<"You loose"<<endl;
            break;
        }
        else if(a==1){
            cout<<"Congrats!!"<<endl<<"You Win"<<endl;
        break;
        }
        else if(a==0){
            cout<<"Oops!!"<<endl<<"You loose"<<endl;
            break;
        }
        cout<<"Its Lisa turn"<<endl;
        
        int number;

            srand(time(0));
             number = rand()%3 + 1;

             if(a>3){
                a=a-number;
            }
             else{
                a=a-1;
            }
             if(a==1){
                cout<<"Oops!!"<<endl<<"You loose"<<endl;
                break;
            }
            else if(a==0){
            cout<<"Oops!!"<<endl<<"You loose"<<endl;
            break;
        }
    }
}
