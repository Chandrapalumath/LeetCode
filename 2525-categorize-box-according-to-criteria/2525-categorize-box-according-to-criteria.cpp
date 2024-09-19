class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool is_bul=false,is_heav=false;
        if(static_cast<long>(length)*width*height>=pow(10,9)|| length>=pow(10,4)|| width>=pow(10,4)|| mass>=pow(10,4) || height>=pow(10,4))is_bul=true;
        if(mass>=100) is_heav=true;
        
        if(is_bul && is_heav) return "Both";
        if(!is_bul &&!is_heav) return "Neither";
        if(is_bul &&!is_heav) return "Bulky";
        if(!is_bul && is_heav) return "Heavy";
        return " ";
    }
};
