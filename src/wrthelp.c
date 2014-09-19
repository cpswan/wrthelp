#include <stdio.h>
#include <unistd.h>
int main(void){   
 printf("First run 'aps' to list access points\n");
 printf("Find the Channel, SSID and Security\n");
 printf("Then run 'vw' to edit the wireless config changepoints:\n");
 printf("1. option channel\n");
 printf("2. option ApCliSsid\n");
 printf("3. option ApCliAuthMode\n");
 printf("4. option ApCliEncrypType\n");
 printf("5. option ApCliPassWord\n");
 printf("\n");
 printf("aps:Security           vw:ApCliAuthMode/ApCliEncrypType\n");
 printf("=======================================================\n");
 printf("WPA1PSKWPA2PSK/TKIPAES	WPA2PSK/AES\n");
 printf("WPA2PSK/AES		WPA2PSK/AES\n");
 printf("WPA2PSK/TKIP		WPA2PSK/TKIP\n");
 printf("WPAPSK/TKIPAES		WPAPSK/TKIP\n");
 printf("WPAPSK/AES		WPAPSK/AES\n");
 printf("WPAPSK/TKIP		WPAPSK/TKIP\n");
 printf("WEP			WEP/WEP\n");
 printf("\n");
 printf("Exit vi with ':wq' then restart network with 'nr'\n");
 printf("\n");
 printf("Run 'ia' to see that the WRTnode got a DHCP lease\n");
 printf("\n");
 return 0;
 }
