#include <bits\stdc++.h>

int main(void){
	int n;   					//��J�b�h�� 
	scanf("%d", &n);		    //��J 
	int uline = n - 1 ,mline = 2*(n-1)+1 , dline = n -1 ;//�W�h�h�� = �b�h - 1 ,���h�����= (�b�h��-1)*2 + 1 ,�U�h�h�� = �b�h -1 
	int j,k,i; //�j��Ѽ� 
		//upper
	while (n > 0 ){  // n  
		for(i = 1;i <= uline; i++ ){ //�̷ӲĤ@�C�V�U�L��� n - 1 �C 
			for(j = 0; j <= (uline - i) ; j++ ){ //unline - i ���i�h�ӦL���Ů��  
				printf(" ");// �Ů� 
			}
			printf("*"); // �L���Ů�L�P�P 
			for(j = 0; j <= (2*(i-2)) ; j++){ // �����Ů�Ƭ� (�Ӽh�� - 2)*2 + 1     �]���q j = 0 �_�l �ҥH�|+1 
				printf(" ");//�Ů� 
			}
			if(i != 1) printf("*\n"); //�Ĥ@�h�u���@�ӬP�P 
			else printf("\n"); //�D�Ĥ@�h���|����ӬP�P 
			}
			// middle
		for(i = 1; i <= mline ; i++ ){ //mline �O ��� 
			if ((i==1)||(i== mline))printf("*"); //�p�G i ���@�Ӧ�m�γ̫�@�Ӧ�m ����|�L�P�P 
			else if (i == n){	//�p�Gi��n���b�h��n �h�|�L�Xi  
				printf("%d",i);//�L 
				if(mline >= 19){i++;}//�p�Gmline > 19(n>10) i�|�[�@�� �֦L�@�ӪŮ� 
			}
			else printf(" "); //��L�L�Ů� 
			}
			//bottom
		printf("\n"); //���� 
		for(i = 1; i <= dline ; i++){ //�̷ӤU�b�h�w�q �L�X��Ƭ� �b�h��@ 
			for(k = 0; k < i ; k++){ //�U�b�h����k + 1�h(i) �|�L�X�Ӽh�ƪ��Ů� 
				printf(" ");//�L�Ů� 
			}
			printf("*");//�L���Ů�L�P�P 
			for(k = 0; k <(dline - i)*2 - 1; k++) //�L�����Ů�� ��(�U�h�h�ƴ�Ӽh�h�� )*2  -  1 �p (3-2)*2  - 1 
				printf(" "); // �L�Ů� 
			if(i != dline) printf("*\n"); //�p�G�h�Ƴ��O�̫�@�h���� ���|�L�P�P�B���� 
			else printf("\n");//�O���ܴN���� ���L�P�P 
		}
		scanf("%d", &n);//���m 
		uline = n - 1 ,mline = 2*(n-1)+1 , dline = n -1 ;//���m 
	}
	printf("\n");
	return 0;
}
