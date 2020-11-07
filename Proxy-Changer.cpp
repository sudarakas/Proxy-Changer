#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
int main(){
	printf("UWU Student-WiFi Proxy Changer By Nano v1.0 Beta\n");
	printf("1. Enable Proxy Setting\n");
	printf("2. Disable Proxy Setting\n");
	printf("3. Enable Git Proxy\n");
	printf("4. Disable Git Proxy\n");
	
	int x;
	printf("Enter Option: ");
	scanf("%d", &x);
	
	switch (x){
		case 1:
    		ShellExecute(NULL,"open","bin\\ep.bat",NULL,NULL,SW_SHOWNORMAL);
    		printf("Proxy setting has been changed, Successfully\n");
    		break;
		
		case 2:
			ShellExecute(NULL,"open","bin\\dp.bat",NULL,NULL,SW_SHOWNORMAL);
    		printf("Proxy setting has been removed, Successfully\n");
    		break;

		case 3:
			ShellExecute(NULL,"open","bin\\git.bat",NULL,NULL,SW_SHOWNORMAL);
    		printf("Proxy setting has been added for git, Successfully\n");
    		break;

		case 4:
			ShellExecute(NULL,"open","bin\\git-unset.bat",NULL,NULL,SW_SHOWNORMAL);
    		printf("Proxy setting has been removed for git, Successfully\n");
    		break;
		
	default:

    		printf("Invalid Option\n");
		
	}
	

	return(0);
}
