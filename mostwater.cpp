int maxArea(vector<int>& height) {
    int maxwater=0;
    int n= height.size();
    int lp=0;
    int rp =n-1;
    int width,area,h;
    
    while(lp<rp){
        width = rp-lp;
        h= min(height[lp],height[rp]);
        area=width*h;
        maxwater= max(area,maxwater);

        height[lp]<height[rp]?lp++:rp--;

    }
    return maxwater;
    
}