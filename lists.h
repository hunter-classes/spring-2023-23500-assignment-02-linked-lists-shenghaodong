#pragma once
#include <iostream>
#include "Node.h"

class List{
    private:
        Node *head;

    public:
        List();
        void insert(std::string data);
        
}