#include <stdio.h>

int getStudentsCount(){
    printf("Enter number of Students: ");
    int students = 0;
    scanf("%d", &students);
    return students;
}

int main()
{
    printf("This Program will calculate Total, Average Marks and Percentage for Students\n");
    int students = getStudentsCount();
    
    if(students > 0){
    
        int numberOfSubjects = 5;
        int listOfMarks[students][numberOfSubjects];
        
        for(int i = 0; i < students; i++){
            printf("\nEnter Marks for Student # 0%d: \n", (i+1));
            for(int j = 0; j < numberOfSubjects; j++){
                switch(j){
                    case 0: printf("Enter marks of Mathematics: "); break;
                    case 1: printf("Enter marks of Chemistry: "); break;
                    case 2: printf("Enter marks of Physics: "); break;
                    case 3: printf("Enter marks of English: "); break;
                    case 4: printf("Enter marks of Computer Sciene: "); break;
                }
                scanf("%d", &listOfMarks[i][j]);
            }
        }
        
        for(int i = 0; i < students; i++){
            int marks = 0;
            for(int j = 0; j < numberOfSubjects; j++){
                marks += listOfMarks[i][j];
            }
            printf("\nFor Student # 0%d\n", (i+1));
            printf("The Total Marks of %d Subjects are: %d\n", numberOfSubjects, marks);
            printf("The Average Marks of %d Subjects are %lf\n", numberOfSubjects, (double)(marks)/5);
            printf("The Percentage of %d Subjects is %lf\n", numberOfSubjects, (double)(marks)/5);
        }
    }else{
        printf("Not Valid Input!");
    }
    return 0;
}