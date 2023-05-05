#include <stdio.h>

void nhap(int a[], int n){
	printf("nhap cac phan tu trong mang:\n ");
	for(int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
}
void  in(int a[],int n){
	for(int i = 0; i < n; ++i){
		printf("%d ",a[i]);
	}
}
int main(){
	int n, a[1000];
	scanf("%d",&n);
	nhap(a,n);
    in(a,n);
	return 0;

}
