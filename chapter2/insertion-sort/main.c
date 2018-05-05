/*
  算法：插入排序
  Date：2018/5/5
  Author: Xiong Langyu
*/

#include <stdio.h>

//控制增序的开关，默认为降序
// #define ASC

#ifdef ASC
  #define KEY 1
#else
  #define KEY 0
#endif

#define SUCCESS 1
#define FAIL 0


void show_arr(int* data, int length){){
  for(int i=0;i<length;i++){
    printf("%d \t", *(data+i) );
  }
  printf("\n" );
}

int insertion_sort(int* data, int length){
  int i = 1;
  int j, key;
  while( i< length ){
    key = data[i];
    j = i-1;
    if(KEY){
      while(j>=0 && data[j]>key){
        data[j+1] = data[j];
        j--;
      }
      data[j+1] = key;
    }else{
      while(j>=0 && data[j]<key){
        data[j+1] = data[j];
        j--;
      }
      data[j+1] = key;
    }

    i++;
  }

  return SUCCESS;
}

int main(){
  int arr[] = { 1, 3, 6, 124, 12, 15, 85, 84};
  int length = (int)(sizeof(arr)/sizeof(int));
  insertion_sort(arr,length);
  // insertSort(arr,length);
  // printf("%d\n", (int)KEY );
  show_arr(arr, length);
  return SUCCESS;
}
