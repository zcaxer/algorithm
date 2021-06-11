/*两次遍历得到list中区间[lo,hi)中的最大值点x1和x2
* 无论什么情况复杂度Θ(n-1+n-2)=Θ(2n-3)
*/
void max2_0(int list[], int lo, int hi, int& x1, int& x2);
/*一次遍历得到list中区间[lo,hi)中的最大值点x1和x2，要求hi-lo>2
* 复杂度最优Θ(1+n-2)，最差Θ[1+2(n-2)]=Θ(2n-3)
*/
void max2_1(int list[], int lo, int hi, int& x1, int& x2);
/*二分法得到list中区间[lo,hi)中的最大值点x1和x2，要求hi-lo>2
* 复杂度最优Θ(1+n-2)，最差Θ[1+2(n-2)]=Θ(2n-3)
*/
void max2_2(int list[], int lo, int hi, int& x1, int& x2);
