sqlite3crypt
============
打开sqlite加密功能。

声明：
1. 主要代码来源于互联网：http://lancelot.blog.51cto.com/393579/940805
2. 具体加密解密函数仅做参考，实际使用中建议自行设计加密解密算法。
3. key请使用32字节字符串（如果需要修改长度，可以修改DB_KEY_LENGTH_BYTE宏）。

使用方法：
1. 创建加密数据库：
在open 之后直接调用 sqlite3_key()

2. 已加密数据库修改密码：
open之后调用sqlite3_key() 传入正确的key之后，调用sqlite3_rekey()修改key

3. 未加密数据库设置密码：
open之后直接调用sqlite3_rekey()设置密码

4. 已加密数据库去掉解除加密：
sqlite3_key()之后调用sqlite3_rekey() key传NULL即可
