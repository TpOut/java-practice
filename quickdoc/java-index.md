> 目前主要来自
>
> 《java 程序设计第10版 - 基础/进阶》
>
> 《java核心技术第9版 - 卷I》
>
> 《java核心技术》有很多总结性的话，《java程序设计》更适合新学。

[style](./style.md)

[tip](./note.md)

[number](./number.md)

[string](./string.md)

[io](./io.md)

[generic](./generic.md)

[api](./api.md)

[reflect](./reflect.md)

[secure](./secure.md)

[jar](./jar.md)

[practice](./question.md)

[inner-class](./inner-class.md)

[collection](./collection.md)

[multi-thread](./multi-thread.md)

[algorithm](./algorithm.md)



```java
static class DeadLoopClass{
  static{
    //如果不加if，编译器会检测到while(ture) 死循环，同时发现在静态初始化部分，然后拒绝编译
    //添加if 则会“绕过”这个检测
    if(true){
      Sytem.out.println("...");
      while(true){
        
      }
    }
  }
}
```



[jni](../jni/quickdoc/jni-index.md)





---

设计模式 : https://java-design-patterns.com/patterns/

快速容器化jib : https://jaxenter.com/jib-java-containerization-146647.html

10本必读书：[https://javarevisited.blogspot.com/2018/06/10-all-time-great-books-for-java.html](https://javarevisited.blogspot.com/2018/06/10-all-time-great-books-for-java.html)  

知识收集：[https://github.com/crossoverJie/JCSprout](https://github.com/crossoverJie/JCSprout)  

多线程编程：[https://www.tutorialdocs.com/article/java-inter-thread-communication.html](https://www.tutorialdocs.com/article/java-inter-thread-communication.html)   

java的null设计错误：[https://medium.com/@elizarov/null-is-your-friend-not-a-mistake-b63ff1751dd5](https://medium.com/@elizarov/null-is-your-friend-not-a-mistake-b63ff1751dd5)
