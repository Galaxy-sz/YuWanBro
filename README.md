# YuWanBro
## 程序员面试金典
- [0108.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/cxymsjd/0108.cpp)
零矩阵：使用第一行第一列做标记，完成原数组上操作。因为作为标记的行列在遍历中要保持只读，所以最后要单独考虑一次第一行和第一列是否需要清零。
- [0503.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/cxymsjd/0503.cpp)
翻转数位：把连续的1分成块，比较相邻两块数目之和的最大值。注意全1时的边界情况。
- [1715.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/cxymsjd/1715.cpp)
最长单词：哈希递归法：使用哈希表存单词信息，递归地查找每个单词是不是可以分解成哈希表里的组合（注意要先在哈希中除去自身）。
- [1715_2.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/cxymsjd/1715_2.cpp)
最长单词：字典树法：构建字典树，使用dfs思想在字典树上查找（很难写出来正确的dfs字典树代码）。
- [0806.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/cxymsjd/0806.cpp)
汉诺塔问题：经典递归问题。
![汉诺塔题解](https://pic.leetcode-cn.com/3bffd1a1faf4323a92b659e37d7e2cd6c79fe074602b2977f4a7931fe82bbb13-08061.gif)
```$xslt
n = 1 时，
    直接把盘子从 A 移到 C；
n > 1 时，
    先把上面 n - 1 个盘子从 A 移到 B（子问题，递归）；
    再将最大的盘子从 A 移到 C；
    再将 B 上 n - 1 个盘子从 B 移到 C（子问题，递归）。
```
- [1701.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/cxymsjd/1701.cpp)
不用加号的加法：组成原理问题，不考虑进位的加法即是“异或”运算，一次异或运算产生的进位实际就是两个加数“与”运算的结果再右移一位，将产生的进位作为新的加数不断迭代地与上一轮的结果异或直到有一次运算不产生进位为止。需要注意的是，因为有符号数的移位运算涉及溢出问题，所有移位运算前尽量先转化为无符号数。

## Main Problem Library
- [21.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/MainProblemLibrary/1715_2.cpp)
合并两个有序链表：双指针迭代法简单，不赘述。递归法使用以下递推公式即可。
```$xslt
list1[0] + merge(list1[1:],list2) list1[0]<list2[0]
list2[0] + merge(list1,list2[1:]) otherwise
```
- [344.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/MainProblemLibrary/344.cpp)
反转字符串：使用递归没有降低交换的时间复杂度，反而浪费了更多的栈空间，很傻逼。直接撒谎指针迭代完事。
- [104.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/MainProblemLibrary/104.cpp)
二叉树的最大深度：DFS非常适合递归写法。非并行的BFS算法实际上就是层序遍历（使用队列实现）。
- [24.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/MainProblemLibrary/24.cpp)
两两交换链表中的节点：链表操作，递归+指针画图法进行分析，注意要把没用的指针赋成NULL。

## 剑指offer
- [03.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/03.cpp)
数组中重复的数字：题目中提示长度为n的数组中存放的都是小于等于n-1的数字，所以遍历一遍数组，遇到数字i就将其和下标为i位置的数字交换，如果交换之前发现下标为i处的数字已经是i，那么此数字就是第一个重复的数字。
- [04.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/04.cpp)
二位数组中查找：将排序二维数组看成二叉查找树，注意下标的增减就可以对应子树的查询。
![矩阵转化为二叉树](https://pic.leetcode-cn.com/6584ea93812d27112043d203ea90e4b0950117d45e0452d0c630fcb247fbc4af-Picture1.png)
- [05.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/05.cpp)
替换空格：在原字符串上做修改，使用双指针（分别在原字符串结束位置和新字符串结束位置）从后向前遍历，两个指针在还存在空格时不可能相遇，相遇时已经替换完毕。
- [06.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/06.cpp)
从尾到头打印链表：递归的方法，虽然没有提升空间或时间里用率，但是对递归的理解还要继续体会。（乌拉乌拉乌拉）
- [07.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/07.cpp)
重建二叉树：递归方法，倒数第二次提交超时，原因是没有使用数学计算的方法找左右子树根节点的位置。
- [09.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/09.cpp)
用两个栈实现队列：这张图的思路应该无敌了。
![用两个栈实现队列](https://assets.leetcode-cn.com/solution-static/jianzhi_09/jianzhi_9.gif)
- [10-1.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/10-1.cpp)
斐波那契数列：谁递归谁傻逼，引入冗余计算，直接顺序求接就完事了。
<<<<<<< HEAD
- [10-2.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/10-2.cpp)
青蛙跳台阶问题：谁递归谁傻逼，最简单的dp问题，了解一下。
- [11.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/11.cpp)
旋转数组中的最小数字：二分查找，根据要查找数组的特性，只能用中间值比较最右边值，分类讨论解的范围，最后的终止条件到左右边界差1就可以直接判断了。
=======
- [12.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/12.cpp)
矩阵中的路径：使用dfs的经典问题，dfs想递归，注意反向判断的方法和每一轮往下递归之前先把该轮判断位置的元素置“\0”，这轮迭代失败再改回来，以防止重复寻路的情况。说了那么多，干脆强行记下来算了。
- [13.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/jzoffer/12.cpp)
机器人运动范围：和“矩阵中的路径”问题一样，使用dfs的典型，注意递归函数中判断的返回的条件要包括这个点已经访问，否则会出现无限递归。
>>>>>>> d51a69335b180c09930cafa378d665a0b7243074
