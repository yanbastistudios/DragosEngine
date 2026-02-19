using System;
using System.Runtime.InteropServices;

public class ExampleBehaviour {
    [DllImport("DragosNative")]
    private static extern void Native_Log(string message);

    public void Start() {
        Native_Log("Hello from C# script!");
    }
}