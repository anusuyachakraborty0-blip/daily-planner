#include<stdio.h>
#include<string.h>

int main() {

    char tasks[15][200];
    int count = 0;
    int choice;

    for(int i = 0; i < 15; i++) {

        printf("\n\nSIMPLE PLANNER\n");
        printf("1. ADD TASKS\n");
        printf("2. VIEW TASKS\n");
        printf("3. VIEW ALL TASKS\n");
        printf("4. EXIT\n");
        printf("ENTER YOUR CHOICE: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if(count == 15) {
                    printf("Task list is full\n");
                    break;
                }
                printf("Enter your task: ");
                getchar();  
                fgets(tasks[count], 200, stdin);
                count++;
                printf("Task added!\n");
                break;

            case 2:
                printf("Enter task number 1-%d: ", count);
                int t;
                scanf("%d", &t);

                if(t < 1 || t > count) {
                    printf("Invalid task number\n");
                    break;
                }

                printf("Task %d: %s\n", t, tasks[t-1]);
                break;

            case 3:
                printf("ALL TASKS:\n");
                for(int j=0; j<count; j++) {
                    printf("%d. %s", j+1, tasks[j]);
                }
                break;

            case 4:
                printf("Exiting planner...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}