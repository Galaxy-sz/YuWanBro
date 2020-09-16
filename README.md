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

## Main Problem Library
- [21.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/MainProblemLibrary/1715_2.cpp)
合并两个有序链表：双指针迭代法简单，不赘述。递归法使用以下递推公式即可。
```$xslt
list1[0] + merge(list1[1:],list2) list1[0]<list2[0]
list2[0] + merge(list1,list2[1:]) otherwise
```
- [344.cpp](https://github.com/Galaxy-sz/YuWanBro/blob/yxy/MainProblemLibrary/344.cpp)
反转字符串：使用递归没有降低交换的时间复杂度，反而浪费了更多的栈空间，很傻逼。直接撒谎指针迭代完事。