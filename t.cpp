#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	int vtmax = 0, vtmin = 0;
	for(int i = 0; i < n; ++i){
		if(a[i] > a[vtmax]){
			vtmax = i;
		}	
		if(a[i] < a[vtmin]){
			vtmin = i;
		}
	}
	printf("%d %d\n",a[vtmax], vtmax + 1);
	printf("%d %d",a[vtmin],vtmin+1);
}
