#include <stdio.h>
#include <conio.h>
#define MAXSIZE 10

int stack[MAXSIZE];
int top = -1;

void push();
void pop();
void display();

int main() {
    int choice;
   // clrscr();  // Used for clearing the screen in some compilers, may not work on modern compilers
    
    do {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    getch();
    return 0;
}

void push() {
    int n;
    if (top == MAXSIZE - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Enter an element: ");
        scanf("%d", &n);
        top++;
        stack[top] = n;
        printf("Element pushed: %d\n", n);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Element popped: %d\n", stack[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: \n");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

