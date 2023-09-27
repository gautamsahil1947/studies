// implementing a queue using stacks
#include <iostream>
#include <stack>

class Mqueue
{
public:
    Mqueue() {}

    // takes input and puts it into the queue (a stack)
    void enqueue(int t) { input.push(t); }

    // we can make it return also if that is the case
    void dequeue()
    {
        if (input.empty())
        {
            std::cout << "queue empty";
            return;
        }
        while (!input.empty())
        {
            revbuffer.push(input.top());
            input.pop();
        }

        std::cout << revbuffer.top() << " ";
        revbuffer.pop();

        while (!revbuffer.empty())
        {
            input.push(revbuffer.top());
            revbuffer.pop();
        }
    }

private:
    // enqueueing happens in input stack
    std::stack<int> input;
    // dequeueing is done with the help of a buffer stack
    // The main stack is emptied into the buffer stack, and
    // from there the top one is removed --> then data goes back
    // to the orignal stack.
    std::stack<int> revbuffer;
};

int main()
{
    int    a = 20;
    int    gat = 4;
    int    tmp = 4;
    Mqueue sahil;
    sahil.enqueue(2);
    sahil.enqueue(3);
    sahil.enqueue(4);
    sahil.enqueue(5);

    sahil.dequeue();
    sahil.dequeue();
    sahil.dequeue();
    sahil.dequeue();
    sahil.dequeue(); // queue empty
}
