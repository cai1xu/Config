LeetCode第199场周赛P4——灯泡开关IV题解
=====

题目描述
------

房间中有 `n` 个灯泡，编号从 `0` 到 `n-1` ，自左向右排成一行。最开始的时候，所有的灯泡都是 **关** 着的。

请你设法使得灯泡的开关状态和 `target` 描述的状态一致，其中 `target[i]` 等于 `1` 第 `i` 个灯泡是开着的，等于 `0` 意味着第 `i` 个灯是关着的。

有一个开关可以用于翻转灯泡的状态，翻转操作定义如下：

- 选择当前配置下的任意一个灯泡（下标为 `i` ）
- 翻转下标从 `i` 到 `n-1` 的每个灯泡

翻转时，如果灯泡的状态为 `0` 就变为 `1`，为 `1` 就变为 `0` 。

返回达成 `target` 描述的状态所需的 **最少** 翻转次数。

**示例：**

```
输入：target = "10111"
输出：3
解释：初始配置 "00000".
从第 3 个灯泡（下标为 2）开始翻转 "00000" -> "00111"
从第 1 个灯泡（下标为 0）开始翻转 "00111" -> "11000"
从第 2 个灯泡（下标为 1）开始翻转 "11000" -> "10111"
至少需要翻转 3 次才能达成 target 描述的状态
```

**提示：**

- `1 <= target.length <= 10^5`
- `target[i] == '0'` 或者 `target[i] == '1'`

解题思路
---

1.问题转化：题目要求算法将关着的灯泡打开变为`target` 。我们可以反向思考，统计将`target` 关闭的次数。

2.寻找规律：由于题目要求翻转下标从 `i` 到 `n-1` 的每个灯泡，很容易想到倒序遍历，于是我们定义一个指针`begin`,使其指向数组最后一个元素。由于关掉所有灯泡并且次数最小，我们无需处理字符串开头的`'0'`,于是我们再定义一个指针`end`,使其指向第一个非`'0'`元素。

3.从最后一个元素开始，由于有的灯泡是开着的，我们需要将所有灯泡都先打开再一起关闭，所以我们统计的次数是不同元素(例如我们认为连续的4个`'0'`为同一组数字，你也可以把它们全看成同一个`'0'`)的组数。但是我们只能统计不同组之间的间隔数，因此在答案非0时要下加1再返回。

​	__[  0 , 0 , 1 , 1 , 1 , 0 , 0 , 1  ]__

​	         ↑                              ↑

 	     `end`                       `begin`              `step` =  0

​	__[  0 , 0 , 1 , 1 , 1 , 0 , 0 , 1  ]__

​	         ↑              ↑

 	     `end`      `begin`                               `step` =  1

​	__[  0 , 0 , 1 , 1 , 1 , 0 , 0 , 1  ]__

​	         ↑

​    `end & begin`                                       `step` =  2(return step + 1)

代码
----

#### C++

```c++
class Solution {
public:
    int minFlips(string target) {
        int step = 0;
        int b = target.size() - 1; 
        int end = 0;
        while(target[end] == '0') end++;
        if(b <= end )
            return 0;
        char c = target.back();
        while(b >= end){
            if(target[b] != c){
                step ++;
                c = target[b];
            }
            b--;
        }
        return step + 1;
    }
};
```
#### C# & JAVA(反正可以直接AC，懒得写了)

``` C#
public class Solution {
    public int MinFlips(string target) {
        int step = 0;
        int b = target.Length - 1; 
        int end = 0;
        while(target[end] == '0') end++;
        if(b <= end )
            return 0;
        char c = target[target.Length - 1];
        while(b >= end){
            if(target[b] != c){
                step ++;
                c = target[b];
            }
            b--;
        }
        return step + 1;
    }
}
```

### Python
``` Python
class Solution:
    def minFlips(self, target: str) -> int:
        step = 0
        begin = target.count() - 1
        end = 0
        while target[end] == '0':
            end++
        if begin <= end:
            return 0
        c = target[begin]
        while begin >= end:
            if target[begin] != c:
                step++
                c = target[begin]
            begin--
        return step + 1
```

我比赛中的提交:https://leetcode-cn.com/api/submissions/91528073/ (AC)