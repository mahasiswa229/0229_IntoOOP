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
};
int main()
{

}