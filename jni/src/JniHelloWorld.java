public class JniHelloWorld {

    public native String displayHelloWorld();

    static {
        System.loadLibrary("hello");
    }

}
