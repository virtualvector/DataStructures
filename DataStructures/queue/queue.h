struct queue {

    int* a;
    int front;
    int rear;
    int size;

};

struct queue* init(int size);
void insert_rear(struct queue* Queue,int val);
int delete_front(struct queue* Queue);
