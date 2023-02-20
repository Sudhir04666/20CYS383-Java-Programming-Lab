#include<stdio.h>

int main()
{
    int id;
    printf("Enter your id: ");
    scanf("%d",&id);
    switch(id) {
        case 72:
        printf("Information of id %d is:\n",id);
        printf("Name:Tanvi \nContact: 123056***\nAdd: Coimbatore");
        break;

        case 73:
        printf("Information of id %d is:\n",id);
        printf("Name:Sudeep\nContact: 3234***\nAdd: Coimbatore");
        break;

        case 74:
        printf("Information of id %d is:\n",id);
        printf("Name:Sudhir\nContact: 12496***\nAdd: Coimbatore");
        break;
         case 75:
        printf("Information of id %d is:\n",id);
        printf("Name:Sudipt\nContact: 163456***\nAdd: Coimbatore");
        break;

        case 76:
        printf("Information of id %d is:\n",id);
        printf("Name:Suganth\nContact: 1233***\nAdd: Coimbatore");
        break;

        default:
        printf("Please Enter Valid Id");   
    }
    return 0;
}