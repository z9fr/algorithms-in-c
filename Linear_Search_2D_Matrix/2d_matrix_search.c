#include <stdio.h>


int search(int sk ,int sizex , int sizey ,int data[sizex][sizey])
{
	printf("\n");

	for(int i = 0 ; i< sizex ; i++){
		for(int j = 0 ; j < sizey ; j++)
		{
			if(data[i][j] == sk)
			{
				printf("value found => [%d],[%d] ", i,j);
				return 0;
				break;
			}
			
		}

	}
}


int main(void)
{
    
   	int sk;
	int sizex;
	int sizey;
	int data[sizex][sizey];

	printf("enter the size of the matrix : \n");
	printf(" -> ");
	scanf("%d",&sizex);
	printf(" -> ");
	scanf("%d",&sizey);
	printf("\n");
    
	printf("enter the values for matrix : \n");

    for(int i= 0 ; i < sizex ; i++){
        for(int j = 0 ; j < sizey ; j++)
        {
		printf(" -> ");
                scanf("%d",&data[i][j]);
        }
    }

    printf("\nplease enter the search key : ");
    scanf("%d",&sk);

    printf("the 2d matrix you enterd was \n");
    

    for(int i =0 ; i < sizex ; i++)
    {
	    for(int j = 0 ; j< sizey ; j++){
		    printf("%d  ",data[i][j]);
		    if(j==sizex){
			    printf("\n");
		    }

	    }
    }


    search(sk, sizex,sizey,data);



}
