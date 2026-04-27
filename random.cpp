#include <bits/stdc++.h>
using namespace std;

int main(){


    int number_of_Page = 0, number_Of_Frame = 0;
    cin>>number_of_Page;

    vector<int> frame_reference(number_of_Page);
    for(int i=0; i<number_of_Page; i++){
        cin>>frame_reference[i];
    }

    cin>>number_Of_Frame;

    vector<int> frame(number_Of_Frame, -1);

    int pageHit = 0, pageFault = 0, pointer = 0;


    for(int i=0; i<number_of_Page; i++){
        bool found = false;

        int current_page = frame_reference[i];

        for(int j=0; j<number_Of_Frame; j++){
            if(frame[j] == current_page){
            found = true;
            pageHit++;
            break;
            }
        }

        if(!found){
            frame[pointer] = current_page;
            pageFault++;
            pointer = (pointer + 1) % number_Of_Frame;
        }

    }

    cout<<"\nPage Hit: "<<pageHit;
    cout<<"\nPage Fault: "<<pageFault<<endl;


}