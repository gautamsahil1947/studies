#include <iostream>
#include <queue>

class Mstack {
public:
    void push(int num) {
        // move all the contents of q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(num);

        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        if (q1.empty()) {

        }
        int tmp = q1.front();
        q1.pop();
        return tmp;
    }
private:
    std::queue<int> q1;
    std::queue<int> q2;
};

int main() {
    Mstack s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    std::cout << s.pop() << std::endl; // 5
    std::cout << s.pop() << std::endl; // 4
    std::cout << s.pop() << std::endl; // 3
    std::cout << s.pop() << std::endl; // 2 
    std::cout << s.pop() << std::endl; // prints->stack empty 0
}
