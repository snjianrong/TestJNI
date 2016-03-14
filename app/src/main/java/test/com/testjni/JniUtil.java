package test.com.testjni;

/**
 * Created by vsteam007 on 2016/2/18.
 */
public class JniUtil {
    static {
        System.loadLibrary("JniLibMe");
    }

    public native String getMString();
}
