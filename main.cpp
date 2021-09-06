//Overloading Special [ ] C++ Array Subscript Operator

#include <iostream>
using namespace std;
class Marks{
    int subjects[3];
public:
    Marks(int sub1, int sub2, int sub3){
        subjects[0]=sub1;
        subjects[1]=sub2;
        subjects[2]=sub3;
    }
    //IMPORTANT NOTE:
    //operators [] () -> can be overloaded, under specific CONDITIONS: The overloaded ftn must be NON-STATIC and a NON-FRIEND ftn
    int operator[](int position){
        return subjects[position];
    }
};

int main(){
    Marks m(11,22,33);
    cout<<m[0]<<endl;  // overloade subscript []operator used
    cout<<m[1]<<endl;
    cout<<m[2]<<endl;
    return 0;
}
