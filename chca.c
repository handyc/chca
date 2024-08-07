// gcc chca.c -o chca

#include <stdio.h>
#include <stdlib.h>

int update_generation(int, int, int, int*);
int display_generation(int, int, int*);
int combine_states(int, int*, int**);

int main(int argc, char *argv[])
{
int i, j;
int rule;
int rule_get;
int first, second, third;
int nrows=8;
int ncolumns=80;
int **s;
int *combined;
int dimension=1;

int iterations=0;
int max_iterations=22;

        s = malloc(nrows * sizeof(int *));
        combined = malloc(ncolumns * sizeof(int *));

if(argc>1)
{
rule=atoi(argv[1]);
}
else
{
printf("\nUsage information:");
printf("\n%s [CA number]\n", argv[0]);
printf("\nExample:");
printf("\n%s 110\n\n", argv[0]);

exit(0);
}

if(s == NULL)
        {
        fprintf(stderr, "out of memory\n");
        //exit or return
        exit(1);
        }
    for(i = 0; i < nrows; i++)
        {
        s[i] = malloc(ncolumns * sizeof(int));
        if(s[i] == NULL)
            {
            fprintf(stderr, "out of memory\n");
            //exit or return
            exit(1);
            }
            
        //s[i][63]='\0';    
        }

//set strings to 0

for(i = 0; i < nrows; i++)
        {
        //printf("\n%d: ", i);
        
        for(j=0;j<ncolumns;j++)
        {
        s[i][j]=0;
        //printf("%d", s[i][j]);
        }
        }
//printf("\n");

for(j=0;j<ncolumns;j++)
        {   
        if(random()%2==0)
        {
        combined[j]=0;
        }
        else
        {
        //combined[j]=1;
        combined[j]=0;
        }
        }
        
        // seed the strings
        combined[ncolumns/2]=1;
        for(j=0;j<8;j++)
        {
        s[j][ncolumns/2]=1;
        //s[j][(random()%ncolumns)]=1;
        }
        
// print initial seeds



// print start of combined          
//combine_states(ncolumns, combined, s);
display_generation(dimension, ncolumns, s[0]);

for(iterations=0;iterations<max_iterations;iterations++)
{
update_generation(rule, dimension, ncolumns, s[0]); 
display_generation(dimension, ncolumns, s[0]);  
}

printf("\n");
return 0;
}

int update_generation(int rule, int dimension, int length, int* input_string)
{
int j;
int rule_get;
int first, second, third;
//
int* temp_string;

int allocation_length=1;
for(j=0;j<dimension;j++)
{
allocation_length=(allocation_length*length);
}

temp_string = malloc(allocation_length * sizeof(int *));

for(j=0;j<allocation_length;j++)
{
temp_string[j]=input_string[j];
}

if(dimension==1)
{
for(j=0;j<allocation_length;j++)
        {
        if(j>0) { first=temp_string[j-1]; }
        else { first=temp_string[allocation_length-1]; // wrap
        }
        second=temp_string[j];
        if((j+1)<allocation_length) { third=temp_string[j+1]; }
        else { third=temp_string[0]; // wrap
        }
        
        rule_get=(first*4)+(second*2)+(third);
        // get the appropriate sub-rule from three cells
        
        input_string[j]=(((rule & (1 << rule_get)) != 0));
        // run the rule on the sub-rule inputs from cells
        }
}
else if(dimension==2)
{
// to be added

}
free(temp_string);
return 0;
}

int display_generation(int dimension, int length, int* input_string)
{
int i=0;

if(dimension==1)
{
printf("\n");       
for(i=0;i<length;i++)
{
printf("%d", input_string[i]);      
//printf("%d ", combined[i]);       
}
}
else if(dimension==2)
{
// to be added


}

return 0;
}

int combine_states(int length, int* combine_string, int** input_string)
{
int j;
for(j=0;j<length;j++)
{
combine_string[j]=(input_string[0][j]*128+input_string[1][j]*64+input_string[2][j]*32+input_string[3][j]*16+input_string[4][j]*8+input_string[5][j]*4+input_string[6][j]*2+input_string[7][j]);
}
return 0;
}
