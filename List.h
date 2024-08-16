
template<typename T>
class List {
    public:
    //insert item at position
    virtual void insert(int index, const T& item) = 0;
    // remove item at position
    virtual void remove(int index) = 0;
    // get item at position
    virtual T get(int index) const = 0;
    // get the number of items in the list
    virtual int size() const = 0;
    // virtual destructor for proper cleanup
    virtual ~List() {}
};