#include <bits/stdc++.h>

int main(void){
	int num;
	while(scanf("%d", &num)!= EOF){
		int var1 = num - 1,var2 = (num-var1)*2 - 1 ; //��l�ƨ�ӯB���ܼ� �ѳo��Ӿާ@�椸����ӦL���ƶq 
		int len = num*2 - 1, nlen = num ; // ������b�� 
		int i, j; //for�ܼ� 
		for( i = 1; i <= len ;i++){ //�L�X�� ? 
			for(j = 1 ; j <= var1 ; j++){ //var1�O�@���ܼ� �L�e�����Ů�  for�j��y�{ ��l�� --> �P�_ --> ���� --> �վ� --> �P�_ -->���� --> �վ� -->�P�_... 
			//	if(var1 == 0)break; 
			//	else 
				printf(" ");
			}
			for(j = 1 ; j <= var2 ; j++){//var2 �O�@���ܼ�  �����ӬP�P�Τ������Źj�ƥ� ����i�檺 2*i -1 �� 
				if((j==1)||(j==var2)){ //�� j ���Ĥ@�өM�̫�@�Ӯ� �|�L�X�P�P 
					printf("*");
				}
				else if((i == num )&&(j == num)){ //�� j ��������(��n��num�o�Ӧ�l �B i ����num��)�� �Y�O �|�L�X num �o�Ӽ�  
					printf("%d", num);			  
					if(len >= 19) j++;			//�Y num >= 10 �h len = num*2 - 1 >= 19 �|j++�@�� �]���G��Ʒ|�v�T��Ů� 
				}
				else
					printf(" "); //��L���p���ӬO�Ů� 
			}
			printf("\n");		//���� 
			if(i < nlen ) var1--; //var1 �ܼƽվ� �Yi�S�p�󤤶����@�� �|�Nvar1���� - 1  �o�˷|�֦L�P�P�e��Ů�ƪ��@�ӪŮ� 
			else var1++;    //�Y����ζW�L���� var1���ȷ| + 1 �W�[�e��@�ӪŮ� 
			var2 = (num-var1)*2 - 1; // var2�|�H��var1���ܼƽվ� 
		}
	}
	return 0;
}
