简单记录一下System 类的公有方法，加深印象



有输入输出错误流相关  
控制台相关   
NIO channels 相关  
安全管理 相关  
当前时间（leap second）、流逝时刻（https://www.cnblogs.com/jice/p/10521948.html）  
数组的拷贝（如果拷贝某一位数据时，发现类型不对，抛出错误，那么之前的拷贝会保留）



返回对象的hashcode

```java
public class TestMain {

    private TestInnerMain main;
    private int id;

    public static void main(String[] args) {
        // ... 看下面
        System.out.println(System.identityHashCode(instance));
    }

    private static class TestInnerMain{}
}

//结果是 951007336
instance = new TestMain();

//结果是 951007336
instance = new TestMain();
instance.id = 3;

//结果是 2001049719
instance = new TestMain();
instance.id = 3;
instance.main = new TestInnerMain();
```



获取系统属性（即使获取全部属性会报错，获取某个具体的属性可能就可以）  

获取分隔符（系统相关）  

获取环境变量（系统相关）  



建议gc  

建议finalize  

加载native库   

 

