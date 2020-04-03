#include<stdlib.h>
#include<stdio.h>

void avg(float ara[],int a){

    int i,num;

    float ave;

    num=ara[0];

    for (i=1;i<a;i++){

        num=ara[i]+num;

    }

    ave=num/a;

    printf("The average is : %0.2f",ave);





}

int main(){

int i,a,n;

//receiving total number of student

    printf("Write the numbers of students : ");

    scanf("%d",&i);

    int fterm[i],sterm[i],tterm[i];

//1st term

    float final_term[i];

    printf("\nFIRST TERM NUMBERS :\n");
    printf("--------------------\n\n");

    for(a=0;a<i;a++){

        printf("Write the no. of  roll [%d]: ",a+1);

        scanf("%d",&fterm[a]);
}

//2nd term

    printf("\n\nSECOND TERM NUMBERS : \n");
    printf("--------------------\n\n");

    for(a=0;a<i;a++){

        printf("Write the no. of  roll [%d] : ",a+1);

        scanf("%d",&sterm[a]);
}

//3rd term

    printf("\n\nTHIRD TERM NUMBERS : \n");
    printf("--------------------\n\n");

    for(a=0;a<i;a++){

        printf("Write the no. of  roll : [%d] ",a+1);

        scanf("%d",&tterm[a]);
}

// calculating the total:

    for(a=0;a<i;a++){

        final_term[a]=(fterm[a]/4.00)+(sterm[a]/4.00)+(tterm[a]/2.00);
}

    printf("\n\n FINAL MARKS (TOTAL) :\n");
    printf("--------------------\n\n");

    for(a=0;a<i;a++){

        printf("The final marks of roll %d is : %0.2f \n",a+1,final_term[a]);

}


// determining highest number 1 term:

    printf("\nFIRST TERM NUMBERS MAXIMUM NUMBER OBTAINED:\n");
    printf("--------------------------------------------\n\n");

    int max;

    max=fterm[0];

    for (a=1;a<i;a++){

        if(fterm[a]>max)

            max=fterm[a];

    }

    printf("THE MAX. NUMBER IN 1ST TERM IS : %d \n\n\n",max);

// determining highest number 2 term:

    printf("\nSECOND TERM NUMBERS MAXIMUM NUMBER OBTAINED:\n");
    printf("--------------------------------------------\n\n");

    int max1;

    max1=sterm[0];

    for (a=0;a<i;a++){

        if(sterm[a]>max1)

            max1=sterm[a];

    }

    printf("THE MAX. NUMBER IN 2ND TERM IS : %d \n\n\n",max1);


// determining highest number 3 term:

    printf("\nTHIRD TERM NUMBERS MAXIMUM NUMBER OBTAINED:\n");
    printf("--------------------------------------------\n\n");

    int max2;

    max2=tterm[0];

    for (a=0;a<i;a++){

        if(tterm[a]>max2)

            max2=tterm[a];

    }

    printf("THE MAX. NUMBER IN 3RD TERM IS : %d \n\n\n",max2);

// determining highest number final term:

    printf("\nFINAL TERM NUMBERS MAXIMUM NUMBER OBTAINED:\n");
    printf("--------------------------------------------\n\n");

    float max3;

    max3=final_term[0];

    for (a=0;a<i;a++){

        if(final_term[a]>max3)

            max3=final_term[a];

    }

    printf("THE MAX. NUMBER IN FINAL TERM IS : %0.2f \n\n\n",max3);


//finding average of each term:

    printf("In first term : \n");

    avg(fterm,i);printf("\n\n");

    printf("In second term : \n");

    avg(sterm,i);printf("\n\n");

    printf("In third term : \n");

    avg(tterm,i);printf("\n\n");

    printf("In final term : \n");

    avg(final_term,i);printf("\n\n");


return 0;

}



