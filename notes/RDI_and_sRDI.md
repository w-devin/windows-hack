# RDI (Reflective DLL Injection)

## 0x00 Overview

常规的dll注入, 一般使用 `LoadLibrary` api 加载指定dll, 详情见 Reference[4]

```c
HMODULE LoadLibraryA(
  [in] LPCSTR lpLibFileName
);
```

因为需要被加载的dll落盘, 很容易被杀软查杀, 所以有了 `stephen fewer` 提出的从内存加载dll的 `反射型dll注入`, 简称 `RDI`, 详见 Reference[5]

目前找到的反射型dll注入主要有两种姿势
- 不对dll做修改, loader为真正意义上的loader
- dll带loader方法, 像 `CobaltStrike` 使用的dll, 就有名为 `ReflectiveLoader` 的导出函数, loader部分仅作简单的dll注入, 执行 loader方法

在 Reference[3]中, 前者准确名称为 `shellcode Reflective DLL Injection`, 简称为 `sRDI`, 后者才是本意的 `RDI`

## Next

在翻阅相关帖子的时候, 发现了一些改进的dll注入姿势, 挖个坑先

1. [Simple-Manual-Map-Injector](https://github.com/TheCruZ/Simple-Manual-Map-Injector)
2. [RemoteLoadDll](https://github.com/Kerrbty/RemoteLoadDll)

## Reference

`Articles`

1. [DLL 注入技术的 N 种姿势](https://zhuanlan.zhihu.com/p/28537697)
2. [深入理解反射式 dll 注入技术](https://paper.seebug.org/1855/)
3. [Reflective DLL Injection](https://www.ired.team/offensive-security/code-injection-process-injection/reflective-dll-injection)
4. [动态载入DLL所需要的三个函数详解(LoadLibrary,GetProcAddress,FreeLibrary)](https://blog.csdn.net/cd520yy/article/details/49455127)

`Repositories`

5. [ReflectiveDllInject](https://github.com/stephenfewer/ReflectiveDLLInjection)
6. [ReflectiveDLLInjection](https://github.com/rapid7/ReflectiveDLLInjection)
7. [injectAllTheThings](https://github.com/DanielRTeixeira/injectAllTheThings)
8. [ReBeacon_Src](https://github.com/WBGlIl/ReBeacon_Src)
