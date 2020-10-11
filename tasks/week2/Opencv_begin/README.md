



## Opencv入门

- 作者: Anifan-Cheng
- 修订: Anifan-Cheng
- 日期: 2020-10-11
- 版本: 1.0.0
- 摘要: 这周时间没有分配好，只有一天时间来看opencv，前期准备工作用了很多时间，只学会了对图像进行基本的操作（二值化，灰度化，腐蚀和膨胀），对识别对象的部分还没弄懂。另外文件测试是在windows上进行的，用makefile编译多文件产生了很多解决不了的问题，可以说这周花了时间很多但是成果不是很好。

---

### 依赖库

```markdown
opencv
```



### 思路

#### **图像处理**
- 将图像进行*灰度化二值化*，并进行*膨胀*和*腐蚀处理*

- 原图：

  <img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201011230912501.png" alt="image-20201011230910259" style="zoom:25%;" />

- 首先对图像进行二值化处理

- <img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201011230829651.png" alt="image-20201011230829651" style="zoom:25%;" />

- 对图像进行灰度化处理，把三通道转变成单通道

- <img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201011231009841.png" alt="image-20201011231009841" style="zoom:25%;" />

- 再次对图像进行二值化处理，让像素变成0或者255

- <img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201011231034145.png" alt="image-20201011231034145" style="zoom:25%;" />

- 进行膨胀再腐蚀

  <img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201011231054806.png" alt="image-20201011231054806" style="zoom:25%;" />

- 得到比较好处理的图像

- 

  

  ---



对act_sample各个图片处理结果如下:

<img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201012011719040.png" alt="image-20201012011719040" style="zoom:20%;" /><img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201012011254637.png" alt="image-20201012011254637" style="zoom:20%;" /><img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201012011843871.png" alt="image-20201012011843871" style="zoom:25%;" /><img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201012011324151.png" alt="image-20201012011324151" style="zoom:25%;" /><img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201012011442394.png" alt="image-20201012011442394" style="zoom:20%;" /><img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201011231054806.png" alt="image-20201011231054806" style="zoom:25%;" />

---



然而对有光照的图片处理效果不佳

<img src="C:\Users\root\AppData\Roaming\Typora\typora-user-images\image-20201012011633315.png" alt="image-20201012011633315" style="zoom:25%;" />