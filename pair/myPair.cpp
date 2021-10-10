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
    void print(){
        cout<<"x: "<<x<<" and y: "<<y<<endl;
    }
};
int main(){
    myPair<int,char> p1;
    p1.setX(10);
    p1.setY('a');
    p1.print();
    myPair<double,int> p2;
    p2.setX(10.2);
    p2.setY(10);
    p2.print();
    myPair<char,int> p3;
    p3.setX('a');
    p3.setY(2);
    p3.print();
    return 0;
}