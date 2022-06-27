#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    protected:
    int width, height;
    
};
class RectangleArea : public Rectangle
{
    public:
     void setwidth(int w)
     {
         width = w;
     }
    void setheight(int h)
     {
         height = h;
     }
     int getwidth()
     {
         return width;
     }
     int getheght()
     {
         return height;
     }
     int getarea()
     {
         return width * height;
     }
     void print()
     {
         cout<<getwidth()<<" "<<getheght()<<endl;
            cout<<getarea()<<endl;
     }
};
int main() {
    int width, height;
    cin>>width>>height;
    RectangleArea R1;
    R1.setheight(height);
    R1.setwidth(width);
    R1.print();
    
    return 0;
}
