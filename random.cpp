#include <bits/stdc++.h>
using namespace std;


int main(){

    int process, resources;
    cout<<"Enter Process Number: ";
    cin>>process;
    cout<<"\nEnter Resources Number: ";
    cin>>resources;

    int allocation[10][10], maximum[10][10], need[10][10], available[10];

    cout<<"\nEnter Allocation Matrix: \n";
    for(int i=0; i<process; i++){
        for(int j=0; j<resources; j++){
            cin>>allocation[i][j];
        }
    }

    cout<<"\nEnter Maximum Matrix: \n";
    for(int i=0; i<process; i++){
        for(int j=0; j<resources; j++){
            cin>>maximum[i][j];
        }
    }

    cout<<"\nEnter Available Resources: \n";
    for(int i=0; i<resources; i++){
        cin>>available[i];
    }

    // for(int i=0; i<process; i++){
    //     for(int j=0; j<resources; j++){
    //         need[i][j] = maximum[i][j] - allocation[i][j];
    //     }
    // }

    int work[10];
    for(int i=0; i<resources; i++){
        work[i] = available[i];
    }


        bool finished[10] = {false};
    int safeSequence[10];
    int count = 0;

        while(count < process){
            bool found = false;

            for(int i = 0; i < process; i++){
                if(!finished[i]){
                    bool canExexcute = true;

                    for(int j=0; j<resources; j++){
                        if(maximum[i][j] > work[j]){
                            canExexcute = false;
                            break;
                        }
                    }

                    if(canExexcute){
                        for(int j=0; j<resources; j++){
                            work[j] += allocation[i][j];
                        }

                        safeSequence[count++] = i;
                        finished[i] = true;
                        found = true;
                    }
                }
            }


            if(!found){
                break;
            }
        }

        bool deadlock = false;
        for(int i = 0; i < process; i++){
            if(!finished[i]){
                cout<<"p"<<i<< " ";
                deadlock = true;
            }
        }
        cout<<endl;

        if(deadlock){
            cout<<"\nDeadlock Occure\n";
        }else{
            cout<<"\nNo Deadlock Ocuure\n";
        }

}



