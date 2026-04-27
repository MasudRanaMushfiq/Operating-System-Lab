#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numberOfProcesses;
    cout << "Enter number of processes: ";
    cin >> numberOfProcesses;

    vector<int> burstTime(numberOfProcesses);
    vector<int> waitingTime(numberOfProcesses, 0);
    vector<int> turnaroundTime(numberOfProcesses, 0);

    // Input burst times
    for (int i = 0; i < numberOfProcesses; i++) {
        cout << "Enter burst time for Process P" << i + 1 << ": ";
        cin >> burstTime[i];
    }

    // FCFS Calculation
    // First process has waiting time = 0
    waitingTime[0] = 0;
    turnaroundTime[0] = 0;

    for (int i = 1; i < numberOfProcesses; i++) {
        // Waiting time = sum of previous burst times
        waitingTime[i] = waitingTime[i - 1] + burstTime[i - 1];

        //if(i==0)
        //     waitingTime[i] = 0;
        // else
        //     waitingTime[i] = turnaroundTime[i-1];

        // Turnaround time = waiting time + burst time
        turnaroundTime[i] = waitingTime[i] + burstTime[i];
    }

    // Output results
    double totalWaitingTime = 0;
    double totalTurnaroundTime = 0;

    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";

    for (int i = 0; i < numberOfProcesses; i++) {
        cout << "P" << i + 1 << "\t"
             << burstTime[i] << "\t\t"
             << waitingTime[i] << "\t\t"
             << turnaroundTime[i] << endl;

        totalWaitingTime += waitingTime[i];
        totalTurnaroundTime += turnaroundTime[i];
    }

    cout << "\nAverage Waiting Time: "
         << totalWaitingTime / numberOfProcesses << endl;

    cout << "Average Turnaround Time: "
         << totalTurnaroundTime / numberOfProcesses << endl;

    return 0;
}


