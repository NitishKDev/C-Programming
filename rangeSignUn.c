#include<stdio.h>
#include<limits.h>
int main(){
    //short,long,signed,unsigned,long long
   // printf("%d",sizeof(long long int));
   /*
   %d = signed integer
   %u = unsigned integer
   %ld = long integer
   %lu = unsigned long integer
   %lld = long long integer
   %llu = unsigned long long integer
   */
    int va1=INT_MIN;
    int va2=INT_MAX;
    unsigned int v1=0;
    unsigned int v2=UINT_MAX;
    short int s1=SHRT_MIN;
    short int s2=SHRT_MAX;
    short unsigned int su1=0;
    short unsigned int su2=USHRT_MAX;
    printf(" signed integer range : %d to %d (By Default)\n unsigned integer range : %u to %u\n",va1,va2,v1,v2);
    printf(" short signed integer range : %d to %d\n",s1,s2);
    printf(" short unsigned integer range : %u to %u\n",su1,su2);
return 0;
}

