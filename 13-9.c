#include <stdio.h>
#include <stdlib.h>

typedef struct {
	    char name[100];
	        int age;
} Student;

int main() {
	    int num_students;
	        
	        printf("입력할 학생 수: ");
		    scanf("%d", &num_students);

		        Student* students = (Student*)malloc(num_students * sizeof(Student));
			    
			    for(int i = 0; i < num_students; i++) {
				            printf("이름과 나이 입력: ");
					            scanf("%s %d", students[i].name, &students[i].age);
						        }

			        printf("--학생 명단--\n");
				    printf("\n");
						  for(int i = 0; i < num_students; i++) {
					            printf("이름: %s, 나이: %d\n", students[i].name, students[i].age);
						        }
				    
				        free(students);
					
					    return 0;
}
