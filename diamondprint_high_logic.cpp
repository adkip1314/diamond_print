#include <bits/stdc++.h>

int main(void){
	int num;
	while(scanf("%d", &num)!= EOF){
		int var1 = num - 1,var2 = (num-var1)*2 - 1 ; //初始化兩個浮動變數 由這兩個操作單元控制該印的數量 
		int len = num*2 - 1, nlen = num ; // 全長跟半長 
		int i, j; //for變數 
		for( i = 1; i <= len ;i++){ //印幾行 ? 
			for(j = 1 ; j <= var1 ; j++){ //var1是一個變數 印前面的空格  for迴圈流程 初始化 --> 判斷 --> 做事 --> 調整 --> 判斷 -->做事 --> 調整 -->判斷... 
			//	if(var1 == 0)break; 
			//	else 
				printf(" ");
			}
			for(j = 1 ; j <= var2 ; j++){//var2 是一個變數  控制兩個星星及中間的空隔數目 為第i行的 2*i -1 個 
				if((j==1)||(j==var2)){ //當 j 為第一個和最後一個時 會印出星星 
					printf("*");
				}
				else if((i == num )&&(j == num)){ //當 j 為正中央(剛好為num這個位子 且 i 為第num行)時 即是 會印出 num 這個數  
					printf("%d", num);			  
					if(len >= 19) j++;			//若 num >= 10 則 len = num*2 - 1 >= 19 會j++一次 因為二位數會影響到空格 
				}
				else
					printf(" "); //其他狀況都該是空格 
			}
			printf("\n");		//換行 
			if(i < nlen ) var1--; //var1 變數調整 若i沒小於中間那一行 會將var1的值 - 1  這樣會少印星星前方空格數的一個空格 
			else var1++;    //若等於或超過的話 var1的值會 + 1 增加前方一個空格 
			var2 = (num-var1)*2 - 1; // var2會隨著var1的變數調整 
		}
	}
	return 0;
}
