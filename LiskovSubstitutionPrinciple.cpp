//
// Created by kalee on 06/10/2020.
//

#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

class Rectangle
{
protected:
    int width, height;
public:
    Rectangle(int width, int height): width(width), height(height){}
    virtual void setWidth(int width){
        Rectangle::width=width;
    }
    int getWidth() const{
        return width;
    }
    virtual void setHeight(int height){
        Rectangle::height=height;
    }
    int getHeight(){
        return height;
    }
    int area() const{
        return width*height;
    }
};

class Square : public Rectangle{
public:
    Square(int size): Rectangle(size,size){}
    void setWidth(int width) override{
        this->width = this->
    }

};

void process(Rectangle &r){
    int w = r.getWidth();
    r.setHeight(10);
    cout<< w*10<<endl;
    cout<< r.area()<<endl;
}



int main(){
    Rectangle r{3,5};
    process(r);
}
