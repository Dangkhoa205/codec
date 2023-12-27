#include <stdio.h>
int main(){
int a,b,tong,hieu,tich,chia;
char dau;
printf("nhap phep tinh tai day:");
scanf("%d%c%d",&a,&dau,&b);
tong =a+b;
hieu =a-b;
tich =a*b;
chia =a/b;
switch(dau){
	case '+':{
		printf("result:%d",tong);
		break;
	}
	case '-':{
		printf("result:%d",hieu);
		break;
	}
	case '*':{
		printf("result:%d",tich);
		break;
	}
	case '/':{
	if(b!=0){	
		printf("result:%d",chia);
		}else if(b==0){
		printf("result: invalid");
		}
		break;
	}
	
}
return 0;
}
