## 说明
---
* __简介：__ 该项目为腾讯游戏客户端公开课作业，作业要求为完成游戏界面的逻辑实现，要求包含角色的个人信息，基础操作按钮，计分显示，此外还要求实现有个得分排行榜，排行榜数据使用save game 保存于本地，并且可编辑自己在榜单上的昵称。
* __开发内容__：在UE自带的第一人称射击类游戏（c++模式）模板的基础上进行开发。主要利用UMG蓝图、c++代码开发，增加内容如下:
  
  1、__开始界面：__ 再开始界面玩家需要输入昵称。
   
  2、__角色信息界面：__ 在角色信息界面显示角色的昵称、状态（包括静止、移动、开火三种状态，利用c++代码实现）等。

  3、__计分功能：__ 小球打到白色方块上即得1分（通过tag判断是否发生碰撞的是否是白色方块）。

  4、__倒计时功能：__ 玩家需要在规定的时间内尽可能多的得分。

  5、__排行榜功能：__ 每次倒计时结束即为完成一场游戏，程序会将当前角色的姓名与得分实时更新到排行榜上，同时在得分结算界面玩家也可以修改自己的昵称。排行榜也会在此时保存到本地（save game），这样即使重新开始游戏，排行榜也会先加载存档里的历史数据，而非建立一个新的空排行榜。
