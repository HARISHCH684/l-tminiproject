#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	home:
	printf("select your cipher tecnique:-\n");
	printf("1:vignere cipher\n");
	printf("2:vernem cipher\n");
	printf("3:hill cipher\n");
	printf("4:ceaser cipher\n");
	
	printf("\nenter value of n\n");
	int n;
	scanf("%d",&n);
	switch(n){
		case 1: 
			{
			
				printf("you choose option 1\n");
				    	int count, j;
				    	char message[50];
      					char key[20];
      					printf("\nEnter Message To Encode:\t");
      					fflush(stdin);
      					scanf("%[^\n]s", message);
      					printf("\nEnter Key:\t");
      					fflush(stdin);
      					scanf("%[^\n]s", key);
      					int message_length = strlen(message), key_length = strlen(key);
      					char temp_key[message_length], encrypted_message[message_length];
      					for(count = 0, j = 0; count < message_length; ++count, ++j)
      					{
            					if(j == key_length)
            					{
                  					j = 0;
            					}
            					temp_key[count] = key[j];
      					}
      					temp_key[count] = '\0';
      					count = 0;
      					while(count < message_length)
      					{
            					encrypted_message[count] = ((message[count] + temp_key[count]) % 26) + 'A';
            					count = count + 1;
      					}
      					encrypted_message[count] = '\0';
      					printf("\n-------------------------------\n");
      					printf("\nIntial String:\t%s", message);
      					printf("\nKey:\t%s", key);
      					printf("\nGenerated Key:\t%s", temp_key);
      					printf("\nEncrypted Message:\t%s", encrypted_message);
      					return 0;
				break;
			}
		case 2:
			{
			
				printf("you choose vernem cipher :-\n");
						char str[60];
 						char key[60]; 
						printf("enter plain text:\n");
 						scanf("%s",str); 
 						printf("enter key:\n");
 						scanf("%s",key); 
 						int l=strlen(str); 
 						int m=strlen(key); 
 						int res[l]; 
 						if(l!=m) 
 						printf("not possible,because plaintext and key lengths are different");
 						else 
 						{
  							for(int i=0;i<l;i++) 
  							{
   								res[i]=str[i]-'A'+key[i]-'A'; 
  							} 
  							printf("encrypted msg\n");
  							for(int i=0;i<l;i++) 
  							{	
   								printf("%c\t",res[i]%26+65);
  							} 
  							printf("\n");  	
  							printf("decrypted msg\n");
  							for(int i=0;i<l;i++) 
  							{
   								printf("%c\t",res[i]-(key[i]-'A')+65);
  							} 
						}
						goto home;	
				break;
			}
		case 3:
				printf("you choose option 3\n");
				break;
		case 4:
			{
			
				printf("\nyou choose ceaser cipher\n");
						char s[60];
						printf("enter the plain test\n");
						scanf("%s",s);
						int n;
						printf("enter the key (key should be a positve integer)\n");
						scanf("%d",&n);
						if(n<26){
						
						for (int i=0;i<strlen(s);i++){
						s[i]=s[i]+n;
						}
					}
					else{
						n=n%26;
						for (int i=0;i<strlen(s);i++){
						s[i]=s[i]+n;
						}						
					}
						printf("your encrypted text is:-");
						printf("%s",s);
				break;
			}
		default :
				printf("you choose none of the above\n");
			break;
	}
	
}