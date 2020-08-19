int pageCount(int n, int p) {
    int pageTurnFront = p/2; //Storing the floor value
    int pageTurnBack;
    //If the book has even no of pages
    if(n%2 != 0){
        // Here is a trick. I am convering last page as page 0
        pageTurnBack = -((p-n)/2); 
    }else{
        // Here is a trick. I am convering last page as page 1
        pageTurnBack = -((p-n-1)/2); 
    }
    return pageTurnFront < pageTurnBack ? pageTurnFront : pageTurnBack;
}

// Contributed By Arindam Hazra
