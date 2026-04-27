#include <bits/stdc++.h>

using namespace std;

int main(){
    int process, resources;

    cin>>process;
    cin>>resources;

    int allocation[10][10], maximum[10][10], need[10][10], available[10];

    for(int i = 0; i < process; i++){
        for(int j = 0; j < resources; j++){
            cin>>allocation[i][j];
        }
    }

    for(int i = 0; i < process; i++){
        for(int j = 0; j < resources; j++){
            cin>>maximum[i][j];
        }
    }

    for(int i = 0; i < resources; i++){
        cin>>available[i];
    }

    for(int i = 0; i < process; i++){
        for(int j = 0; j < resources; j++){
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }


    int work[10];
    for(int i = 0; i < resources; i++){
        work[i] = available[i];
    }


    bool finished[10] = {false};
    int safesequence[10];
    int count = 0;

    while(count < process){
        bool found = false;

        for(int i = 0; i < process; i++){
            if(!finished[i]){
                bool canexecute = true;

                for(int j = 0; j <resources; j++){
                    if(need[i][j] > work[j]){
                        canexecute = false;
                        break;
                    }
                }


                if(canexecute){
                    for(int j = 0; j < resources; j++){
                        work[j] += need[i][j];
                    }
                    safesequence[count++] = i;
                    finished[i] = true;
                    found = true;
                }
            }
        }

        if(!found){
            cout<<"System is not safe state\n";
        }
    }

    cout<<"System is in safe state\n";
    for(int i = 0; i < process; i++){
        cout<<"P " << safesequence[i];
        if(i != process-1)
            cout<<" - >";
    }

    cout << "\n";

}

