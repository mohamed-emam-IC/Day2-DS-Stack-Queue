#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node *next;
        int data;
        Node(int data){
            data=data;
        }
};

#endif // NODE_H
