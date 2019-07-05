#include <iostream>
#include <vector>
#include <cassert>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <queue>
using namespace std;


/**@brief : TWO sum
 *
 */
//时间复杂度 O（N）
//空间复杂度 O（N）
class Solution{
public:
    vector<int> twoSum(vector<int>& nums,int target){
        unordered_map<int,int>record;
        for(auto i = 0;i < nums.size();i++){
            int complement = target - nums[i];
            if(record.find(complement) != record.end()){
                int res[2] = {i,record[complement]};
                return vector<int>(res,res+2);
            }
            record[nums[i]] = i;
        }
        throw invalid_argument("the input has no solution");

            //record[nums[i]] = i;

    }
};

/**
 * @brief :4 sum
 *
 * 时间复杂度O（n^2）
 * 空间复杂度O（n^2）
 */
 class Solution1{
 public:
     int fourCount(vector<int>& A, vector<int>& B, vector<int>& C,vector<int>&D){
         assert(A.size() == B.size() && B.size() == C.size() && C.size() == D.size());

         unordered_map<int,int>record;
         for(int i = 0;i < C.size();++i)
             for(int j = 0;j < D.size();++j)
                 record[C[i] + D[j]]++;

         int res = 0;
         for(int i = 0;i < A.size();++i)
             for(int j = 0;j < B.size();++j)
                 if(record.find(-A[i]-B[j]) != record.end())
                     res += record[ 0-A[i]-B[j] ];
         return res;
     }

 };

/**Number of Boomerangs
 *时间复杂度O（N^2）
 * 空间复杂度 O（N）
 */
 class Solution3{
 public:
     int numberOfBoomerangs(vector<pair<int,int>>& points){//pair代表数据对

         int res = 0;
         for(int i =0;i< points.size();i++){
             unordered_map<int,int> record;
             for(int j = 0;j < points.size();j++)
                 if(j!=i)
                     record[dis(points[i],points[j])]++;
         for(unordered_map<int,int>::iterator iter = record.begin();iter != record.end();iter++)
             if(iter->second >= 2)
                 res+= (iter->second)*(iter->second-1);
         }
         return res;

     }

 private:
     int dis(const pair<int,int> &pa,const pair<int,int >&pb)
     {
         return (pa.first - pb.first)*(pa.first - pb.first)+ (pa.second - pb.second)*(pa.second - pb.second);
     }
 };
/**219 contains Duplicate 2
 *
 */
 class Solution4{
 public:
     bool containNearbyDuplicate(vector<int>& nums,int k){
         unordered_set<int>record;
         for(int i = 0;i < nums.size();++i)
         {
             if(record.find(nums[i]) != record.end())
                 return true;
             record.insert(nums[i]);
             //保持record中最多有K个元素
             if(record.size() == k+1)
                 record.erase(nums[i-k]);
         }
     }
 };

/**contains Duplicate 3
 *
 */
class Solution5{
public:
    bool containNearbyAlmostDuplicate(vector<int>& nums,int k,int t){
        set<int>record;
        for(int i = 0;i < nums.size();++i)
        {
//            if(record.find(nums[i]) != record.end())
//                return true;
            if(record.lower_bound((long long)nums[i] - (long long )t) != record.end() && *record.lower_bound((long long)nums[i] - (long long)t) <= (long long)nums[i] +(long long)t)
                return true;
            record.insert(nums[i]);
            //保持record中最多有K个元素
            if(record.size() == k+1)
                record.erase(nums[i-k]);
        }
    }
};

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x) : val(x),next(NULL){}
};
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode (int x) : val(x),left(NULL),right(NULL){}
};

/**Delete Node in a Linked List
 *
 *
 */
 class Solution6{
 public:
     void deleteNode(ListNode* node){
         if(node == NULL)
             return;
         if(node->next == NULL){
             delete node;//直接释放空间
             node = NULL;
             return;
         }
         node->val = node->next->val;
         ListNode* delNode = node->next;
         node->next = delNode->next;
         delete delNode;
         return;
     }


 };

class Solution7{
public:
    ListNode* removeNthFromEnd(ListNode* head,int n){
        ListNode* dummyHead = new ListNode(0);
        dummyHead->next = head;

        ListNode* p = dummyHead;
        ListNode* q = dummyHead;
        for(int i = 0;i < n+1;i++){
            assert(q);
            q = q->next;
        }
        while(q!= NULL){
            p = p->next;
            q = q->next;

        }
        ListNode* delNode = p->next;
        p->next = delNode->next;
        delete delNode;
        ListNode* retNode = dummyHead->next;
        delete dummyHead;
        return retNode;
    }
};

/**层序遍历 6-4
 *
 */
 class Solution8{
 public:
     vector<vector<int>> levelOrder(TreeNode* root){
         vector<vector<int>>result;
         if(root == NULL)
             return result;
         queue<pair<TreeNode*,int>> q;
         q.push(make_pair(root,0));
         while(!q.empty()){
             TreeNode* node = q.front().first;
             int level = q.front().second;
             q.pop();
             if(level == result.size())
                 result.push_back(vector<int>());
             result[level].push_back(node->val);

             if(node->left)
                 q.push(make_pair(node->left,level + 1));
             if(node->right)
                 q.push(make_pair(node->right,level + 1));
         }
         return result;


     }
 };


/**6-5 BFS 和图的最短路径
 *
 */
 class Solution9{
 public:
     int numSquares(int n){
         assert(n > 0);
         queue<pair<int,int>>q;
         q.push(make_pair(n,0));
         vector<bool>visited(n+1,false);
         visited[n] = true;

         while(!q.empty())
         {
             int num = q.front().first;
             int step = q.front().second;
             q.pop();

             for(int i = 1; ; i++){
                 int a = num - i*i;
                 if(a < 0)
                     break;
                 if(a == 0)
                     return step + 1;
                 if(!visited[a]){
                     q.push(make_pair(a,step+1));
                     visited[a] = true;
                 }
             }
         }
         throw invalid_argument("NO solution");

     }
 };

 /**6.7 优先队列的算法问题
  *
  *
  */
  class Solution10{
  public:
      vector<int>topKFrequent(vector<int>&nums,int k){
          assert(k > 0);
          unordered_map<int,int>freq;//第一个值为元素，第二个为元素频率
          for(int i = 0;i < nums.size();i++)
              freq[nums[i]]++;
          assert(k <= freq.size());

          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
          //第一部分为频率，第二部分为该频率对应的元素
          for(unordered_map<int,int>::iterator iter = freq.begin();iter!= freq.end();iter++)
          {
              if(pq.size() == k){
                  if(iter->second > pq.top().first){
                      pq.pop();
                      pq.push(make_pair(iter->second,iter->first));
                  }
              }
              else
                  pq.push(make_pair(iter->second,iter->first));

          }
          vector<int>res;
          while(!pq.empty()){
              res.push_back(pq.top().second);
              pq.pop();
          }
          return res;

      }
  };

  /**7-1求二叉树最高深度
   *
   */
   class soulution{
   public:
       int maxDepth(TreeNode* root){
           if(root == NULL)
               return 0;
           int leftMaxDepth = maxDepth(root->left);
           int rightMaxDepth = maxDepth(root->right);
           return max(leftMaxDepth,rightMaxDepth)+1;
       }

   };

   /**7.2反转二叉树
    *
    */
    class solution1{
        TreeNode* invertTree(TreeNode* root){
            if(root == NULL)
                return NULL;
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left,root->right);

            return root;
        }
    };

/**7-3 path sum
  *
  *
  */
  bool hasPathSum(TreeNode* root,int sum){
      if(root->left == NULL && root->right == NULL)
          return root->val == sum;
      if(hasPathSum(root->left,sum-root->val))
          return true;
      if(hasPathSum(root->right,sum-root->val))
          return true;
      return false;

  }
  /**7-4
   *
   * @return
   */
  class solution3{
  public:
      vector<string>binaryTreePaths(TreeNode* root){
          vector<string>res;
          if(root == NULL)
              return res;
          if(root->left == NULL && root->right ==NULL){
              res.push_back(to_string(root->val));
              return res;
          }
          vector<string> leftS = binaryTreePaths(root->left);
          for(int i = 0;i < leftS.size();++i)
              res.push_back(to_string(root->val) + "->" + leftS[i]);
          vector<string> rightS = binaryTreePaths(root->right);
          for(int i = 0;i < rightS.size();++i)
              res.push_back(to_string(root->val) + "->" + rightS[i]);
      }
  };

  /**7-5
   *
   * @return
   */
   class solution4{
   public:
       //在以root为根节点的二叉树中，寻找和为sum的路径，返回这样的路径个数
       int pathsum(TreeNode* root ,int sum){
           if(root == NULL)
               return 0;
           int res = findPath(root,sum);//包含这个节点其和为sum的值
           res += pathsum(root->left,sum);
           res += pathsum(root->right,sum);
           return res;
       }

   private:
       //在以node为根节点的二叉树中，寻找包含node的路径，和为sum
       //返回这样的路径个数
       int findPath(TreeNode* node ,int num){
           if(node == NULL)
               return 0;
           int res = 0;
           if(node->val = num)
               res+=1;
           res += findPath(node->left,num - node->val);
           res += findPath(node->right,num - node->val);

       }
   };

   /**7-6 二分搜索树找公共祖先
    *
    * @return
    */
    class solution5{
        TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode *p,TreeNode* q){
            assert( p!= NULL && q!= NULL)
            if(p->val < root->val && q->val < root->val)
                return lowestCommonAncestor(root->left,p ,q);
            if(p->val > root->val && q->val > root->val )
                return lowestCommonAncestor(root->right,p,q);
            return root;
        }
    };
    /**8-1 Leecode17 letter combinations  of a phone number
     *
     * @return
     */
     class solution6{
     public:

     };
int main()
{
    return 0;
}

//#include <iostream>
//#include <iterator>
//#include <cstdio>
//#include <algorithm>
//#include <algorithm>
//#include <opencv2/opencv.hpp>
//#include <iomanip>
//#include <vector>
//#include <math.h>
//#include <cmath>
//#include <forward_list>
//#include <stack>
//#include<stdexcept>
//
//
//using namespace std;
////using namespace cv;
//#define pi 3.14159265
////
//
//const int MAXN = 2100;
//struct Point
//{
//    double x,y;
//}line[MAXN][2];
//
//double mult(Point p0,Point p1,Point p2)  //叉积计算,p0为公用节点
//{
//    return (p0.x - p1.x) * (p0.y - p2.y) - (p0.y - p1.y) * (p0.x - p2.x);
//}
//
////aa、bb属于同一个矩形     cc、dd属于同一个矩形         相交返回true，不相交返回false
//bool Judge(Point aa,Point bb,Point cc,Point dd)
//{
//    //判断两个形成的矩形不相交
//    if(max(aa.x , bb.x) < min(cc.x , dd.x)) return false;
//    if(max(aa.y , bb.y) < min(cc.y , dd.y)) return false;
//    if(max(cc.x , dd.x) < min(aa.x , bb.x)) return false;
//    if(max(cc.y , dd.y) < min(aa.y , bb.y)) return false;
//    //现在已经满足快速排斥实验，那么后面就是跨立实验内容(叉积判断两个线段是否相交)
//    if(mult(aa,cc,bb) * mult(aa,bb,dd) < 0) return false;           //正确的话也就是aa,bb要在cc或者dd的两边
//    if(mult(cc,aa,dd) * mult(cc,dd,bb) < 0) return false;
//    return true;
//}
//
////int main()
////{
////    cout<<sin(7*pi/6)<<endl;
////    cout<<sin(pi/3)<<endl;
////}
//
//int main()
//{
//    int n;
//    bool flag = true;
//    bool flag1 = true;
//    bool flag2 = true;
//
//    bool flag_final = flag1 || flag2;
//    cout<<flag_final<<endl;
//
////        for(int i = 0;i < n;i ++)
////            scanf("%lf%lf%lf%lf",&line[i][0].x,&line[i][0].y,&line[i][1].x,&line[i][1].y);
//    line[1][0].x = -4.60943;
//    line[1][0].y = 0.420793;
//    line[1][1].x = -7.41894;
//    line[1][1].y = -1.66647;
//
//
//    line[0][0].x = -3.05268;
//    line[0][0].y = -0.134978;
//    line[0][1].x = -0.98346;
//    line[0][1].y = 2.95774;
//
//    line[2][0].x = 3;
//    line[2][0].y = 0;
//    line[2][1].x = 5;
//    line[2][1].y = 0;
//
//    bool point[2];
//    point[0] = false;
//    point[1] = false;
//    //point[2] = false;
//    for(int i = 0;i < 2;i ++)
//        for(int j = i+1;j < 2;j ++) {
//            if (Judge(line[i][0], line[i][1], line[j][0], line[j][1])) // 判断两条直线是否相交
//            {
//                flag = false;
//                break;
//            }
//            if (!flag) break;
//
//        }
////
//////    int i,j;
//////    for(i = 0;i< 3;++i){
//////            std::cout<<"start cross judge:"<<std::endl;
//////            for(j = 0;j < 3;++j)
//////            {
//////                if(i == j )
//////                    continue;
//////                point[i] = Judge(line[i][0],line[i][1],line[j][0],line[j][1]);
//////            }
//////        }
////    for(int i = 0;i < 3;i++)
////    {
////        for(int j = 0;j<3;j++ )
////        {
////            if(!point[i] && i!=j)
////            {
////                point[i] = Judge(line[i][0],line[i][1],line[j][0],line[j][1]);
////            }
////
////        }
////    }
////
////
////
//    std::cout<<point[0]<<" "<<point[1]<<" "<<endl;
//    if(!flag) printf("burned!\n");
//    else printf("ok!\n");
//
//
//
//    return 0;
//}
//
////void qsort(int *arr,int start ,int end)
////{
////    if(start >= end)
////        return;
////    int i = start;
////    int j = end;
////    int key = arr[i];
////    while(i< j)
////    {
////        while(i<j && arr[j] >=key)
////        {
////            j--;
////        }
////        arr[i] = arr[j];
////        while(i<j && arr[i]<=key)
////        {
////            i++;
////        }
////        arr[j] = arr[i];
////
////    }
////    arr[i] = key;
////    qsort(arr,start,i-1);
////    qsort(arr,i+1,end);
////}
////
//////快速排序算法
////int main()
////{
////    vector<int>a;
////    a.reserve(100);
////    a.resize(50);
////    cout<<a.size()<<" "<<a.capacity()<<endl;
////    a.resize(150);
////    cout<<a.size()<<" "<<a.capacity()<<endl;
////    a.reserve(50);
////    cout<<a.size()<<" "<<a.capacity()<<endl;
////    a.resize(50);
////    cout<<a.size()<<" "<<a.capacity()<<endl;
////    int arr[5] = {3,4,2,1,9};
////    qsort(arr,0,4);
//////    for(int i = 0;i< 5;i++)
//////    {
//////        cout<<arr[i]<<" ";
//////    }
////
////
////return 0;
////}