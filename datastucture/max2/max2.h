/*���α����õ�list������[lo,hi)�е����ֵ��x1��x2
* ����ʲô������ӶȦ�(n-1+n-2)=��(2n-3)
*/
void max2_0(int list[], int lo, int hi, int& x1, int& x2);
/*һ�α����õ�list������[lo,hi)�е����ֵ��x1��x2��Ҫ��hi-lo>2
* ���Ӷ����Ŧ�(1+n-2)����[1+2(n-2)]=��(2n-3)
*/
void max2_1(int list[], int lo, int hi, int& x1, int& x2);
/*���ַ��õ�list������[lo,hi)�е����ֵ��x1��x2��Ҫ��hi-lo>2
* ���Ӷ����Ŧ�(1+n-2)����[1+2(n-2)]=��(2n-3)
*/
void max2_2(int list[], int lo, int hi, int& x1, int& x2);
