#include <iostream>
using namespace std;

double getTowerHeight(){
    cout << "Enter the height of the tower in meters:";
    int h{};
    cin >> h;
    return h;
}

double formula(double towerHeight,int seconds){
    constexpr double gravity{9.8};
    
    double distanceFallen{(gravity*(seconds*seconds))/2};
    double currentHeight{towerHeight - distanceFallen};
    
    return currentHeight;
}

void check(double height, int seconds){
    if (height > 0.0)
        cout << "At " << seconds << " seconds, the ball is at height: " << 	height << "\n";
    else
        cout << "At " << seconds << " seconds, the ball is on the ground." << "\n";
}

int main(){
    double theight{getTowerHeight()};
    check(formula(theight, 0), 0);
    check(formula(theight, 1), 1);
    check(formula(theight, 2), 2);
    check(formula(theight, 3), 3);
    check(formula(theight, 4), 4);
    check(formula(theight, 5), 5);
    
    return 0;
}
