#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    while(true){
        if ((GetKeyState(VK_SHIFT) & 0x8000) != 0){
            cout << "1";
        } else {
            cout << "0";
        }
    }
}
