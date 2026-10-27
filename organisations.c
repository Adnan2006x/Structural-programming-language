#include <stdio.h>
#include <string.h>

int main()
{
    struct employee
    {
        char name[50];
        int age;
        float salary;
        char location[50];
        char blood_group[5];
    };

    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Name: ");
        scanf(" %49[^\n]", emp[i].name);

        printf("Age: ");
        scanf("%d", &emp[i].age);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("Location: ");
        scanf(" %49[^\n]", emp[i].location);

        printf("Blood Group: ");
        scanf("%4s", emp[i].blood_group);
    }

    char search[50];
    int found = 0;

    printf("\nEnter Name or Location for enquiry: ");
    scanf(" %49[^\n]", search);

    for (int j = 0; j < n; j++)
    {
        if (strcmp(emp[j].name, search) == 0 ||
            strcmp(emp[j].location, search) == 0)
        {
            printf("\nEmployee Details:\n");
            printf("Name        : %s\n", emp[j].name);
            printf("Age         : %d\n", emp[j].age);
            printf("Salary      : %.2f\n", emp[j].salary);
            printf("Location    : %s\n", emp[j].location);
            printf("Blood Group : %s\n", emp[j].blood_group);

            found = 1;
        }
    }

    if (found == 0)
    {
        printf("\nEmployee not found!\n");
    }

    return 0;
}