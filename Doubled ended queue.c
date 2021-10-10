#include <stdio.h>
#include <stdlib.h>

struct node 
{
	int data;
	struct node *prev, *next;
};
typedef struct node * deq ;

deq createNode(int data) 
{
	deq newnode = (deq) malloc(sizeof (deq));
	newnode->data = data;
	newnode->next = newnode->prev = NULL;
	return (newnode);
}

void createSentinels(deq *head,deq *tail) 
{
	*head = createNode(0);
	*tail = createNode(0);
	(*head)->next = *tail;
	(*tail)->prev = *head;
}

void enqueueAtFront(deq *head,deq *tail,int data) 
{
	deq newnode, temp;
	newnode = createNode(data);
	temp = (*head)->next;
	(*head)->next = newnode;
	newnode->prev = *head;
	newnode->next = temp;
	temp->prev = newnode;
}

void enqueueAtRear(deq *head,deq *tail,int data) 
{
	deq newnode, temp;
	newnode = createNode(data);
	temp = (*tail)->prev;
	(*tail)->prev = newnode;
	newnode->next = *tail;
	newnode->prev = temp;
	temp->next = newnode;
}

void dequeueAtFront(deq *head,deq *tail) 
{
	deq temp;
	
	if ((*head)->next == *tail) 
	{
		printf("Queue is empty\n");
	} 
	else 
	{
	temp = (*head)->next;
	(*head)->next = temp->next;
	temp->next->prev = *head;
	free(temp);
	}
	
	return;
}

void dequeueAtRear(deq *head,deq *tail) 
{
	deq temp;
	
	if ((*tail)->prev == *head) 
	{
		printf("Queue is empty\n");
	} 
	else 
	{
	temp = (*tail)->prev;
	(*tail)->prev = temp->prev;
	temp->prev->next = *tail;
	free(temp);
	}
	
	return;
}

void display(deq *head,deq *tail) 
{
	deq temp;
	
	if ((*head)->next == *tail) 
	{
		printf("Queue is empty\n");
		return;
	}
	
	temp = (*head)->next;
	
	while (temp != *tail) 
	{
		printf("%-3d", temp->data);
		temp = temp->next;
	}
	
	printf("\n");
}

void main() 
{
	deq head = NULL, tail = NULL;
	int data, ch;
	createSentinels(&head,&tail);
	while (1) 
	{
		
		printf("1. Enqueue at front\n2. Enqueue at rear\n");
		printf("3. Dequeue at front\n4. Dequeue at rear\n");
		printf("5. Display\n6. Exit\n");
		printf("Enter your choice:");
		scanf("%d", &ch);
		switch (ch) 
		{
			case 1:
				printf("Enter the data to insert:");
				scanf("%d", &data);
				enqueueAtFront(&head,&tail,data);
				break;
			case 2:
				printf("Enter ur data to insert:");
				scanf("%d", &data);
				enqueueAtRear(&head,&tail,data);
				break;
			case 3:
				dequeueAtFront(&head,&tail);
				break;
			case 4:
				dequeueAtRear(&head,&tail);
				break;
			case 5:
				display(&head,&tail);
				break;
			case 6:
				exit(0);
			default:
				printf("Please enter correct option\n");
				break;
		}
	}
}