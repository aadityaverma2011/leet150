class Solution {
public:
    string intToRoman(int num) {
        map<int,string> m;
        m[1]="I";
        m[4]="IV";
        m[5]="V";
        m[9]="IX";
        m[10]="X";
        m[40]="XL";
        m[50]="L";
        m[90]="XC";
        m[100]="C";
        m[400]="CD";
        m[500]="D";
        m[900]="CM";
        m[1000]="M";
        int tencounter=-1;
        string newstring;
        int digitholder=0;
        int facevalue=0;
        while(num>0){
            digitholder=num%10;
            tencounter++;
            facevalue= digitholder*(pow(10,tencounter));
            if(facevalue<4){
                for(int i=0;i<digitholder;i++){
                    newstring.insert(0,m[1]);
                }
            }
            else if(facevalue>5 && facevalue <9){
                for(int i=0;i<digitholder-5;i++){
                    newstring.insert(0,m[1]);
                }
                newstring.insert(0,m[5]);
            }
            else if(facevalue>10 && facevalue<40){
                for(int i=0 ; i<digitholder ; i++){
                     newstring.insert(0,m[10]);
                }
            }
            else if(facevalue>50 && facevalue<90){
                for(int i=0; i<digitholder-5 ;i++ ){
                    newstring.insert(0,m[10]);
                }
                newstring.insert(0,m[50]);
            }
            else if(facevalue>100 && facevalue <400){
                for(int i=0; i<digitholder ;i++){
                    newstring.insert(0,m[100]);
                }
            }
            else if(facevalue>500 && facevalue<900){
                for(int  i=0; i<digitholder-5; i++){
                    newstring.insert(0,m[100]);
                }
                newstring.insert(0,m[500]);
            }
            else if(facevalue>1000){
                for(int i=0; i<digitholder;i++){
                    newstring.insert(0,m[1000]);
                }
            }
            else{
                newstring.insert(0,m[facevalue]);
            }
            num=num/10;
        }

        return newstring;

    }
};