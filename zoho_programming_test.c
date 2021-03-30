/*Input:
Family information:
Ram, Male, Ramesh, Revathy		
Bavana, Female, Ramesh, Revathy
Agilan, Male, Ram, Darshini
Yamini, Female, Elango, Bavana
Megala, Female, Elango, Bavana

Person name: Agilan*/


#include<stdio.h>
struct family{
    char person_name[50];
    char gender[6];
    char father_name[50];
    char mother_name[50];
}fa[50];

// use can use binary tree for solving problem

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(char val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void main(){
printf("family details");
printf("enter number of family");
int a;
char pp_name[50];
scanf("%d",&a);
for(int i=0; i<a;i++)
{
    scanf("%s%s%s%s",&person_name[i],&gender[i],father_name[i],mother_name[i]);
}
printf("person name");
scanf("%s",&pp_name);
}
