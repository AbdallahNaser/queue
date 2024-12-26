#include <iostream>

using namespace std;
const int MAX_LENGTH=100;
class arrayQueueType
{

    int rear;
    int front;
    int length;
    int arr[MAX_LENGTH];

public:
    arrayQueueType(){
        front=0;
        rear=MAX_LENGTH-1;
        length=0;

    }
    int isEmpty(){
        return length==0;
    }
    int isFull(){
    return length ==MAX_LENGTH;
    }

    void addQueue(int Element){
    if(isFull()){
        cout<<"queue is Full , you can't add anything";
    }
    else{
        rear=(rear+1)%MAX_LENGTH;
        arr[rear]=Element;
        length++;
    }
    }

    void deleteQueue(){
    if(isEmpty())
    {
        cout<<"empty queue Can't Dequeue . . . !";
    }
    else{
        front = (front+1)%MAX_LENGTH;
        length--;
    }
    }

    int frontQueue()
    {
        return arr[front];
    }
    void getFront(int &getFront)
    {
                cout<<"empty queue. . . !\n";

        getFront=arr[front];
    }
    int rearQueue(){
    if(isEmpty())
    {
        cout<<"empty queue. . . !\n";
    }
    return arr[rear];
    }

    void printQueue()
    {
        if(!isEmpty())
        {


        for(size_t i = front; i!=rear ; i=(i+1)%MAX_LENGTH)
        {
            cout<<arr[i] <<" ";
        }
        cout<<arr[rear];
        }
        else
        {
            cout<<"Empty queue"<<"\n";
        }
    }




};

int main()
{
    arrayQueueType q1;
    q1.addQueue(10);
    q1.addQueue(20);
    q1.addQueue(30);
    q1.addQueue(40);
    q1.deleteQueue();
    q1.printQueue();
    return 0;
}
