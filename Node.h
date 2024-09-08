#ifndef NODE_H
#define NODE_H

class Node {

    private:
    int data;
    Node* link;

    public:
    Node(int, Node*);
    int getData();
    Node* getLink();
    void setData(int data);
    void setLink(Node* link);

};

#endif
