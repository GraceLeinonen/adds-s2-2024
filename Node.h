#ifndef NODE_H
#define NODE_H

template<class T>
class Node {

    private:
    T data;
    Node* link;

    public:
    // constructors and destructor
    Node();
    Node(T data);
    Node(T data, Node* link);
    ~Node();

    // getters and setters
    T getData();
    Node* getLink();
    void setData(T data);
    void setLink(Node* link);

};

#endif