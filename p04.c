#include<stdio.h>

void fake_swap(float ca,float cb){
    float temp=ca;
    ca=cb;
    cb=temp; 
    printf("Fake swap in local ca= %.0f  cb =%.0f\n",ca,cb);
}
void real_swap(float *pca ,float *pcb){
    float temp=0;
    temp=*pca;
    *pca=*pcb;
    *pcb=temp;
     printf("\nReal swap in local ca =%.0f   cb =%.0f\n",*pca,*pcb);
}      

void main(){
    float ca,cb;
  
    printf("enter ca");
    scanf("%f",&ca);
     printf("enter cb");
    scanf("%f",&cb);
 
    fake_swap(ca,cb);
      printf("Fake swap in main ca= %.0f  cb =%.0f\n",ca,cb);

    real_swap(&ca,&cb);
      printf("Real swap in main ca= %.0f  cb =%.0f\n",ca,cb);


}