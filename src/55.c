#include <stdio.h>

void print_menu() {
    printf("1. Add Student\n2. View Students\n3. Exit\n");
}

int main() {
    int choice;

    while (true) {
        print_menu();

        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter student details: ");
            scanf("%d %d %s", &student_id, &first_name, &last_name);
            printf("Student added successfully!\n");
        } else if (choice == 2) {
            for (int i = 0; i < n; ++i) {
                printf("ID: %d | First Name: %s | Last Name: %s\n", student_ids[i], first_names[i], last_names[i]);
            }
        } else if (choice == 3) {
            break;
        }

        printf("Enter 'exit' to exit or any other key to continue.\n");
    }

    return 0;
}
