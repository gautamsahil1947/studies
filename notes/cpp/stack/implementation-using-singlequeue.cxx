#include <ctime>
#include <iostream>
#include <queue>


class Mstack {
    public:
        // void stackpush(int t) {
        //     if (q.empty()) {
        //         q.push(t);
        //         return;
        //     }
        //
        //     int tmp = q.front();
        //     q.pop();
        //     stackpush(t);
        //     q.push(tmp);
        //
        // }
        //
        void stackpush(int t) {
            q.push(t);
        }

        void reverse(std::queue<int>& e) {
            if (e.empty()) {
                return;
            }
            int tmp = e.front();
            e.pop();
            reverse(e);
            e.push(tmp);
        }
        void inv() {
            reverse(q);
        }

        int stackpop() {
            if (q.empty()) {
                return -1;
            }

            this->inv(); // reverse it in the same array
            int tmp = q.front();
            q.pop();
            this->inv();
            return tmp;
        }
        std::queue<int> q;
    private:
};

int main() {
    Mstack sahil;
    sahil.stackpush(1);
    sahil.stackpush(2);
    sahil.stackpush(3);
    sahil.stackpush(4);
    std::cout << sahil.stackpop() << std::endl;
    std::cout << sahil.stackpop() << std::endl;
    std::cout << sahil.stackpop() << std::endl;
    std::cout << sahil.stackpop() << std::endl;
}
