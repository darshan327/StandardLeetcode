#include<bits/stdc++.h>
using namespace std;
  
    class Elevator{
        private:
            int currentFloor;
            int direction;
            set<int> upRequests;
            set<int> downRequests;
            public:
            Elevator(int startFloor){
                currentFloor = startFloor;
                direction =1;
            }
            
            void requestFloor(int floor){
                if(floor==currentFloor){
                    cout<<"Already on floor"<<floor<<endl;
                    return;
                }
                if(floor>currentFloor){
                    upRequests.insert(floor);
                }else{
                    downRequests.insert(floor);
                }
            }

            void move(){
                while(!upRequests.empty() || !downRequests.empty()){
                    if(direction==1){
                        if(!upRequests.empty()){
                            int nextFloor = *upRequests.begin();
                            currentFloor=nextFloor;
                            cout<<"elevator reached floor"<<currentFloor<<endl;
                            upRequests.erase(nextFloor);
                        }else{
                            direction = -1;
                        }
                    }else{
                        if(!downRequests.empty()){
                            int nextFloor = * downRequests.rbegin();
                            currentFloor=nextFloor;
                            cout<<"elevator reached floor"<<currentFloor<<endl;
                            downRequests.erase(nextFloor);
                        }else{
                            direction = 1;
                        }
                    }
                }
                cout<<"All request completed"<<endl;
            }
    };

  int main(){
    Elevator elevator(4);

    elevator.requestFloor(7);
    elevator.requestFloor(2);
    elevator.requestFloor(9);
    elevator.requestFloor(1);

    elevator.move();

    return 0;
  }