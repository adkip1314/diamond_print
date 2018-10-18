#include <bits\stdc++.h>

int main(void){
	int n;   					//块糷计 
	scanf("%d", &n);		    //块 
	int uline = n - 1 ,mline = 2*(n-1)+1 , dline = n -1 ;//糷糷计 = 糷 - 1 ,い糷计= (糷计-1)*2 + 1 ,糷糷计 = 糷 -1 
	int j,k,i; //癹伴把计 
		//upper
	while (n > 0 ){  // n  
		for(i = 1;i <= uline; i++ ){ //ㄌ酚材材 n - 1  
			for(j = 0; j <= (uline - i) ; j++ ){ //unline - i ボi糷赣计  
				printf(" ");//  
			}
			printf("*"); // Ч琍琍 
			for(j = 0; j <= (2*(i-2)) ; j++){ // ず场计 (赣糷计 - 2)*2 + 1     眖 j = 0 癬﹍ ┮穦+1 
				printf(" ");// 
			}
			if(i != 1) printf("*\n"); //材糷Τ琍琍 
			else printf("\n"); //獶材糷常穦Τㄢ琍琍 
			}
			// middle
		for(i = 1; i <= mline ; i++ ){ //mline 琌 计 
			if ((i==1)||(i== mline))printf("*"); //狦 i 竚┪程竚 ê或穦琍琍 
			else if (i == n){	//狦i糷计n 玥穦i  
				printf("%d",i);// 
				if(mline >= 19){i++;}//狦mline > 19(n>10) i穦Ω ぶ 
			}
			else printf(" "); //ㄤ 
			}
			//bottom
		printf("\n"); //传︽ 
		for(i = 1; i <= dline ; i++){ //ㄌ酚糷﹚竡 ︽计 糷搭 
			for(k = 0; k < i ; k++){ //糷材k + 1糷(i) 穦赣糷计 
				printf(" ");// 
			}
			printf("*");//Ч琍琍 
			for(k = 0; k <(dline - i)*2 - 1; k++) //ず场计 (糷糷计搭奔赣糷糷计 )*2  -  1  (3-2)*2  - 1 
				printf(" "); //  
			if(i != dline) printf("*\n"); //狦糷计场琌程糷杠 常穦琍琍传︽ 
			else printf("\n");//琌杠碞传︽ ぃ琍琍 
		}
		scanf("%d", &n);//竚 
		uline = n - 1 ,mline = 2*(n-1)+1 , dline = n -1 ;//竚 
	}
	printf("\n");
	return 0;
}
