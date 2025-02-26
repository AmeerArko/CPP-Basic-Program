#include <iostream>
using namespace std;
//Takahashi is in a 100th stories building building he uses stairs if he is coming down 2 floor max .
//and 3 floor going up but else he uses elevator.
int main(){
        int x,y;
        cin>>x>>y;
        if (x>y&&x-y<=3){
            cout<<"Stairs.";
        }
        else  if (x<y&&y-x<=2){
            cout<<"Stairs.";
        }
        else {
            cout<<"Elevator.";
        }

    return 0;
}