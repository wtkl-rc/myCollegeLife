/**
 * 5.4.1哈夫曼树的概念
 * 1、结点间的路径和结点的路径长度
 * 就是结点到另一个结点所经历的结点和分支序列
 * 
 * 2、结点的权和结点的带权路径长度
 * 我们给结点赋予的数值就是权值   带权路径长度就是权和长度的乘积
 * 
 * 3、树的带权路径长度
 * 树的带权路径长度就是树中所有叶结点的带权路径长度之和
 * 
 * 4、哈夫曼树
 * 就是带权路径长度达到最小值，必须使权值越小的叶结点越远离根结点
 * 而权值越大的叶结点越靠近根结点
*/


/**
 * 5.4.2哈弗曼树和哈夫曼编码的构造方法
 * 
 * 1、哈夫曼树的构造
 * （1）初始化，由已知给定的n个权值，构造一个由n棵二叉树所构成的森林（并赋予权值）
 * （2）选取根结点的权值最小的和次小的，作为左子树和右子树去构造一颗新的二叉树
 *  新的二叉树的权值为其左、右子树根结点的权值的和
 * （3）删除那两棵子树，把新的二叉树加入到森林
 * （4）重复二三步骤
 * 可以规定左子树的根结点权值小于等于右子树的根结点的权值
 * 
 * 2、用哈夫曼树进行编码
 * 在进行编码a，b，c时要用分隔符，否则会出现二义性，为了不使用分隔符
 * 要求给出的每个字符的编码必须使前缀编码，前缀编码是指在所有字符的编码中
 * 任何一个字符都不是另一个字符的前缀
 * 
 * 过程：
 * 用电文中各个字符使用频度作为叶结点的权，构造哈夫曼树
 * 若对树中的每个左分支赋予标记0，右分支赋予标记1，
 * 则从根结点到每个叶结点的路径上的标记连接起来就构成一个二进制串，称为哈夫曼编码
 * 
 * 3、用哈夫曼树进行译码
 * 逆过程，自己想
*/


//5.4.3构造哈夫曼树和哈夫曼编码的算法

typedef struct htnode{
    int weight;  //权值域
    char data;   //数据域
    int parent,lchind,rchild;   //双亲结点域、左孩子域和右孩子域
}htnode;

int ht;

void createhftree(int ht){    //这里的int ht就是一个的int是结构体，数组

    int i,p1,p2;

    inithuffmantree(ht);   //初始化哈夫曼树
    inputhuffman(ht);      //输入权值

    
}

void selectmin(int ht,int i,int &p1,int &p2){

}

void inithuffmantree(int ht);

void inputhuffman(int ht);


