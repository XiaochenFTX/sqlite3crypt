#include "crypt.h"

#include "memory.h"

void swap(unsigned char* a, unsigned char* b)
{
	unsigned char tmp = *a;
	*a = *b;
	*b = tmp;
}

/***********
关键加密函数
***********/
int My_Encrypt_Func(unsigned char * pData, unsigned int data_len,
	unsigned char * key, unsigned int len_of_key)
{
	unsigned int i;
	for (i = 0; i < data_len; ++i)
	{
		pData[i] ^= 0xcf;
		pData[i] ^= key[i % len_of_key];
	}

	return 0;
}

/***********
关键解密函数
***********/
int My_DeEncrypt_Func(unsigned char * pData, unsigned int data_len,
	unsigned char * key, unsigned int len_of_key)
{
	unsigned int i;
	for (i = 0; i < data_len; ++i)
	{
		pData[i] ^= key[i % len_of_key];
		pData[i] ^= 0xcf;
	}

	return 0;
}