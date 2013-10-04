#ifndef __MY_CRYPT_H__
#define __MY_CRYPT_H__

int My_Encrypt_Func(unsigned char * pData, unsigned int data_len, unsigned char * key, unsigned int len_of_key);
int My_DeEncrypt_Func(unsigned char * pData, unsigned int data_len, unsigned char * key, unsigned int len_of_key);

#endif