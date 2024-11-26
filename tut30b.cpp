#include<iostream>
#include<math.h>
using namespace std;

class point{
    float x, y;
    friend void distance(point p1, point p2);
    public:
    point(float a, float b){
        x = a;
        y = b;
    }
    void DisplayPoint(void){
        cout<<"the point is "<<"("<<x<<","<<y<<")"<<endl;
    }
};  
void distance(point o1, point o2){
    float a = sqrt(pow(o2.x-o1.x,2)+pow(o2.y-o1.y,2));
    cout<<"the distance between two point is "<<a<<endl;
}

int main(){
    //implicit call
    point p1(2,3);
    p1.DisplayPoint();
    //explicit call
    point p2 = point(4,5);
    p2.DisplayPoint();
    distance(p1,p2);
return 0;
}