SimpleWindow
============

An abstract class handling Win32 window creation, along with an example child class and test harness.

To use the class, subclass it and implement a windowproc function:

<pre><code>LRESULT CALLBACK WindowProc(
  _In_  HWND hwnd,
  _In_  UINT uMsg,
  _In_  WPARAM wParam,
  _In_  LPARAM lParam
);
</code></pre>

What's the point?
=================

Pure Win32 window creation makes it easy to sandbox simple GDI/GDI+ apps. For when you want a bit of OO in your app, but you don't want MFC or WPF. 

License
=======
SimpleWindow is released under the MIT License:
http://opensource.org/licenses/MIT