#include<iostream>
using namespace std;
template <typename T,typename V>
class myPair{
    T x;
    V y;
    public:
    void setX(T x){
        this->x=x;
    }
    void setY(V y){
        this->y=y;
    }
    T getX(){
        return x;
    }
    V getY(){
        return y;
    }
    void print(myPair<int,int> p){
        //cout<<"x: "<<x<<" and y: "<<y<<endl;
    }
};
void myPair::print(myPair<int,int> p){
        cout<<"x: "<<p.getX()<<" and y: "<<p.getY()<<endl;
    }
}
void myPair::print(myPair<myPair<int,int>,int> p){
    cout<<p.getX().getX()<<" "<<p.getX().getY()<<" "<<p.getY<<endl;
}
int main(){
    myPair<int,char> p1;
    p1.setX(10);
    p1.setY('a');
    p1.print();
    
    myPair<myPair<int,int>,int> p4; //pair of pair
    p4.setY(100);
    myPair<int,int> p5;
    p5.setX(200);
    p5.setY(300);
    p4.setX(p5);
    //p4.print();          overload the print fn bro!
    return 0;
}