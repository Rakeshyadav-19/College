#include<stdio.h>

int main()
{
int id;
char name[100];

Printf("enter the group id");
Scand("%d",&id);

Switch(id)
{
     case 100:
       Printf("permission granted");
       break;
    default:
      Printf("wrong id");
}

Printf("enter your name");
Scanf("%s",&name);

Switch(name)
{
   Case '+':
          Printf("welcome Rax");
          break;
  Case '-':
       Printf("welcome vivek");
       break;

      default:
       Printf("name not found");
       
}
  return 0;
}