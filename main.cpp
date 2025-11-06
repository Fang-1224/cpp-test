#include <iostream>
using namespace std;

int main() {
    int stack[5];  // 宣告堆疊空間
    int top = -1;  // 記錄堆疊頂端位置

    // 推入三個元素
    top++;
    stack[top] = 10;
    top++;
    stack[top] = 20;
    top++;
    stack[top] = 30;

    // 輸出目前堆疊內容
    cout << "目前堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl << endl;

    // 彈出一個元素
    if (top >= 0) {
        cout << "彈出元素: " << stack[top] << endl;
        top--;
    } else {
        cout << "堆疊是空的，不能彈出!" << endl;
    }

    // 再次輸出堆疊內容
    cout << "彈出後堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}
