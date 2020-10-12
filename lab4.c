#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void insert_arr();
void delete_arr();
void display();
int queue_a[MAX];
int rear=-1;
int front=-1;


int main()
{
 int choice;
 while(1)
 {
 	printf("1.Insert \n");
 	printf("2.Delete \n");
 	printf("3.Display \n");
 	printf("4.Exit \n");
 	printf("\nEnter your choice: \n ");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 		case 1: insert_arr();
 		        break;
 		case 2: delete_arr();
 		        break;
 		case 3: display();
 		        break;
 		case 4: exit(1);
 		default: printf("Invalid Choice! \n");
 	}
 }
}

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_a[i]);
        printf("\n");
    }
}

void insert_arr()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow. \n");
    else
    {
        if (front == - 1)
        /*If queue is initially empty */
        front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_a[rear] = add_item;
    }
}

void delete_arr()
{
	if (front==-1 || front>rear)
	{
		printf("Queue Underflow \n");
        return;
	}
	 else 
	 {
	 	printf("Deleted Element is: %d \n ", queue_a[front]);
	 	front=front+1;
	 }
}
