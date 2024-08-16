
template<typename T>
class Stack {
    public:

    // insert an element into the stack
    virtual void push(const T& element) = 0;

    // remove and return the top element of the stack
    virtual T pop() = 0;

    // return the top element without removing it
    virtual T top() const = 0;

    // check if the stack is empty
    virtual bool isEmpty() const = 0;

    // virtual destructor for proper cleanup
    virtual ~Stack() {}
};