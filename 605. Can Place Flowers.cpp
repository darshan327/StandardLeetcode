 // time complexity: O(n)
 // space complexity: O(1)
 
 
 class Solution {
      public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int  m = flowerbed.size();
          if(m==1 && flowerbed[0]==0){
             n--;
             return n<=0;
          }
           if(flowerbed[0]==0 && flowerbed[1]==0){
                flowerbed[0]=1;
                n--;
           }
            int i=1;
             while(i<m-1){
                if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    flowerbed[i]=1;
                    n--;
                }
                i++;
             }

          if(flowerbed[m-1]==0 && flowerbed[m-2]==0){
              n--;
          }
          return n<=0;
    }
};