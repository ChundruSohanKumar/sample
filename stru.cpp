#include<stdio.h>
#include<conio.h>


//This is my first github program
struct student{
	char name[100];
	int age;
	char gender[6];
	char adress[100];
	int maths,physics,chemistry,dbms,c,average;
	
};
int main(){
	student collage[2];
	for(int i=0;i<2;i++){
		printf("enter the name of student %d",i+1);
		scanf("%s",&collage[i].name);
		printf("enter the age of student %d",i+1);
		scanf("%d",&collage[i].age);
		printf("enter the gender of student %d (Male/Female)",i+1);
		
		scanf("%s",&collage[i].gender);
		printf("enter the adress of student %d",i+1);
		scanf("%s",&collage[i].adress);
		printf("enter the maths marks of student %d ",i+1);
		scanf("%d",&collage[i].maths);
		printf("enter the physics marks of student %d ",i+1);
		scanf("%d",&collage[i].physics);
		printf("enter the chemistry marks of student %d ",i+1);
		scanf("%d",&collage[i].chemistry);
		printf("enter the dbms marks of student %d ",i+1);
		scanf("%d",&collage[i].dbms);	
		printf("enter the c marks of student %d ",i+1);
		scanf("%d",&collage[i].c);
		collage[i].average=(collage[i].maths+collage[i].physics+collage[i].chemistry+collage[i].dbms+collage[i].c)/5;
		
		printf("\n\n");
		
	}
	   for(int i=0;i<2;i++){
		printf("name:%s\n",collage[i].name);
		printf("age:%d\n",collage[i].age);
		printf("gender:%s\n",collage[i].gender);
		printf("adress:%s\n",collage[i].adress);
		printf("maths:%d\n",collage[i].maths);
		printf("physics:%d\n",collage[i].physics);
		printf("chemistry:%d\n",collage[i].chemistry);
		printf("dbms:%d\n",collage[i].dbms);	
		printf("c:%d\n",collage[i].c);
		printf("average of all marks:%d\n",collage[i].average);
		printf("\n\n");
		
	}
	
	
}
