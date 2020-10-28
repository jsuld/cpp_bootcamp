#include <iostream>

struct Node
{
    int data;
    struct Node *next;
};

Node * append(struct Node *head, int node_data)
{
    std::cout << "append head: " << head << "\n";
    /* 1. create and allocate node */
    Node *newNode = new Node;
    Node *last = head; /* used in step 5*/

    /* 2. assign data to the node */
    newNode->data = node_data;

    /* 3. set next pointer of new node to null as its the last node*/
    newNode->next = nullptr;

    /* 4. if list is empty, new node becomes first node */
    if (head == nullptr)
    {
        std::cout << "list is empty\n";
        head = newNode;
        std::cout << "head->value " << head->data << "\n";
        std::cout << "append head: " << head << "\n";
        delete newNode;
        delete last;
        return head;
    }

    /* 5. Else traverse till the last node */
    while (last->next != nullptr)
        last = last->next;

    /* 6. Change the next of last node */
    last->next = newNode;
    delete newNode;
    delete last;
    return head;
}

Node * remove_first(struct Node *head){
    Node *head_temp = new Node;
    head_temp=head;
    //head_temp=head;
    head=head_temp->next;
    delete head_temp;
    return head;
}

void displayList(struct Node *node)
{
    //traverse the list to display each node
    while (node != nullptr)
    {
        std::cout<<node->data<<"-->";
        node = node->next;
    }
 
    if(node == nullptr)
        std::cout<<"null"; 
    std::cout << std::endl;
} 

void insert_position(struct Node **head, int pos, int value){
    Node *node=*head;
    Node *temp = nullptr;
    Node *newNode=new Node;
    newNode->data=value;
    for(int i=0; i<pos;i++){
        if(node==nullptr){
            std::cout << "List not large enough!\n";
            break;
        }
        if(i==pos-1){
            temp=node->next;
            node->next=newNode;
            newNode->next=temp;
        }  
        node=node->next;
    }
    delete temp;
    delete newNode;
    delete node;
}

// Does not wortk properly, I don't ha time to fix it
void remove_position(struct Node **head, int pos){
    Node *node=*head;
    for(int i=0; i<pos;i++){
        if(node==nullptr){
            std::cout << "Position not included in list!\n";
            break;
        }
        if(i==pos-1){
            if(node->next->next!=nullptr)
                node=node->next;
            else
                node->next=nullptr;
        }  
        node=node->next;
    }
    delete node;

}

int main()
{
    Node *head = nullptr;
    //Node *head = new Node;

    int position;
    int user_input=0;
    while (user_input != 6){
        std::cout << "What do you want to do? Enter integer\n1. Add item to list\n2. Remove item from the front of the list\n" << 
                    "3. Display list\n4. Add value at position\n5. Remove item at position\n6. Exit\n";
        std::cin >> user_input;
        switch (user_input)
        {
        case 1:
            std::cout << "What value do you want to add? ";
            int value;
            std::cin >> value;
            std::cout << "main head: " << head << "\n";
            head=append(head,value);
            std::cout << "main head: " << head << "\n";
            //std::cout << "head->value " << head->data << "\n";
            std::cout << std::endl;
            break;
        case 2:
            if(head!=nullptr){
                std::cout << "Removing item from the front of the list with value "<<head->data<<std::endl;
                head=remove_first(head);
                std::cout << std::endl;
            } else {
                std::cout << "List is empty!"<<std::endl<<std::endl;
            }
            break;
        case 3:
            std::cout << std::endl;
            displayList(head);
            std::cout << std::endl;
            break;
        case 4:
            std::cout<<"Which value do you want to add? ";
            std::cin>>value;
            std::cout<<"At which position (starting from 0)? ";
            std::cin>>position;
            insert_position(&head,position,value);
            break;
        case 5:
            std::cout<<"At which position (starting from 0)? (Does not work properly) ";
            std::cin>>position;
            remove_position(&head,position);
            break;
        default:
            break;
        }
    }

    return 0;

    // delete all pointers
    while(head!=nullptr){
        std::cout << "deleting...\n";
        head=remove_first(head);
    }
    delete head;

    return 0;
}