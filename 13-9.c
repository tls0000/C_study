#include <stdio.h>
#include <stdlib.h>

typedef struct {
	    char name[100];
	        int age;
} Student;

int main() {
	    int num_students;
	        
	        printf("�Է��� �л� ��: ");
		    scanf("%d", &num_students);

		        Student* students = (Student*)malloc(num_students * sizeof(Student));
			    
			    for(int i = 0; i < num_students; i++) {
				            printf("�̸��� ���� �Է�: ");
					            scanf("%s %d", students[i].name, &students[i].age);
						        }

			        printf("--�л� ���--\n");
				    printf("\n");
						  for(int i = 0; i < num_students; i++) {
					            printf("�̸�: %s, ����: %d\n", students[i].name, students[i].age);
						        }
				    
				        free(students);
					
					    return 0;
}
