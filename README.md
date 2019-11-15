# C语言技巧
Collecting and introduce some c language programming skills

## Skills
![#157500](https://placehold.it/15/157500?text=+)  [1.宏定义的妙用方法](#技巧1)  

###  技巧1.
**宏定义的妙用方法**

看了intel在linux内核中的驱动，学习到了一个非常有用的小技巧，如下代码：  

```C
#define IN
#define OUT
#define UAdress volatile unsigned int *
#define Raw_buffer void *
void SetHwiPortsDataReg(IN UAdress Register , IN int value)
{
 _SetHwiPortsDataReg(Register,&value);
}
  
void _Out_Put_value(IN UAdress Register, OUT Raw_buffer buffer)
{
 _Out_Put_value(Register,buffer);
}
```
这里，IN和OUT的定义可以让代码更容易阅读，如上，IN表示把数据输入，OUT表示取数据，一个小小的技巧。  

---
