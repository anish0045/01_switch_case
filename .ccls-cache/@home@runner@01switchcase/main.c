//syntax of switch case statement
/*  syntax
    switch(exp)
    {
    case 1 :
        statement(s);
            break;
    case 2 :
        statement(s);
            break;
    case 3 :
        statement(s);
            break;
    default :
    statement(s);
    }
*/

//use of switch case statement
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter Your Choice!");
	printf("\n1.Monday 2. Tuesday 3. Wednesday ");
	printf("\n4.Thursday 5.Friday 6. Saturday 7 . Sunday=");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("\n\tMONDAYDAY");
			break;
		case 2:
			printf("\n\tTUESDAY");
			break;
		case 3:
			printf("\n\tWEDNESDAY");
			break;
		case 4:
			printf("\n\tTHURSDAY");
			break;
		case 5:
			printf("\n\tFRIDAY");
			break;
		case 6:
			printf("\n\tSATURDAY");
			break;
		case 7:
			printf("\n\tSUNDAY");
			break;
		default:
			printf("\nWrong choice! choose 1-7 only!");
	}
}