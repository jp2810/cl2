#include"soapH.h"
#include"calc.nsmap"
#include<math.h>
#include<stdio.h>
#define PORT 3000
int main()
{
	int m;
	struct soap *s = soap_new();
	m = soap_bind(s,NULL,PORT,100);
	if(m<0)
		printf("error");
	printf("\nsocket connection suceesfull");
	while(1)
	{
		soap_accept(s);
		soap_serve(s);
		soap_end(s);
	}
}
int ns__add(struct soap *soap,int a,int b,int *result)
{
	
	*result = a + b;
	return SOAP_OK;
}
