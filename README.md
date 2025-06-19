# 简介
本项目提供在STM32上使用C和C++联合编程

## 项目前置处理
基于Makefile方式，在STM32CubeMX中得到基于Makefile的STM32项目
然后根据 [https://wexhi.github.io/](https://wexhi.github.io/) 中的内容进行vscode+EIDE插件+stm32的实现

## 具体C++实现方法

(1)修改Makefile
**增加**
- CXX_SOURCES 62行
- CXX = $(GCC_PATH)/$(PREFIX)g++ 78行
- CXX = $(PREFIX)g++ 84行
- CXX_DEFS 117行
- CXX_INCLUDES 131行
- CXXFLAGS 140行
- OBJECTS 174行
- BUILD_DIR 183行

(2)增加CXX文件，并注释原C文件的main函数

## 本项目使用方法（只包括基本操作）及提醒
- 增加自己的文件记得要在Makefile中修改CXX_SOURCES和CXX_INCLUDES，以及在EIDE中添加目录
- 包含一些STM32的源库，如IC2，可能需要在CXXmain.hpp中声明函数（如果使用的时候报错提示找不到的话）