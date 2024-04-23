#include <iostream>
using namespace std;
class bangundatar
{
    private:
    float panjang,lebar;
    public:
    float luas;
    void input()
    {
        cout << "masukan panjang : ";
        cin >> panjang;
        cout << "masukan lebar : ";
        cin >> lebar;
    }
    float hitungluas()
    {
        return panjang*lebar;
    }
    void display()
    {
        cout << "panjang" << panjang << endl;
        cout << "lebar" << lebar << endl;
        cout << "luas persegi panjang : " << hitungluas() << endl;
    }
};
int main()
{

}