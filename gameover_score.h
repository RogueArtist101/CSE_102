void gameover_score(int score){
	    if(score==0) iShowBMP(352,264, "0.bmp");
        if(score==1) iShowBMP(352,264, "1.bmp");
        if(score==2) iShowBMP(352,264, "2.bmp");
        if(score==3) iShowBMP(352,264, "3.bmp");
        if(score==4) iShowBMP(352,264, "4.bmp");
        if(score==5) iShowBMP(352,264, "5.bmp");
        if(score==6) iShowBMP(352,264, "6.bmp");
        if(score==7) iShowBMP(352,264, "7.bmp");
        if(score==8) iShowBMP(352,264, "8.bmp");
        if(score==9) iShowBMP(352,264, "9.bmp");
        if(score>9 && score<100 ){
		if(score%10==0) iShowBMP(352+15,264, "0.bmp");
        if(score%10==1) iShowBMP(352+15,264, "1.bmp");
        if(score%10==2) iShowBMP(352+15,264, "2.bmp");
        if(score%10==3) iShowBMP(352+15,264, "3.bmp");
        if(score%10==4) iShowBMP(352+15,264, "4.bmp");
        if(score%10==5) iShowBMP(352+15,264, "5.bmp");
        if(score%10==6) iShowBMP(352+15,264, "6.bmp");
        if(score%10==7) iShowBMP(352+15,264, "7.bmp");
        if(score%10==8) iShowBMP(352+15,264, "8.bmp");
        if(score%10==9) iShowBMP(352+15,264, "9.bmp");
		//if(score%10==0) iShowBMP(iScreenWidth/2+5, iScreenHeight-50, "0.bmp");
        if(score/10==1) iShowBMP(352-5,264, "1.bmp");
        if(score/10==2) iShowBMP(352-5,264, "2.bmp");
        if(score/10==3) iShowBMP(352-5,264, "3.bmp");
        if(score/10==4) iShowBMP(352-5,264, "4.bmp");
        if(score/10==5) iShowBMP(352-5,264, "5.bmp");
        if(score/10==6) iShowBMP(352-5,264, "6.bmp");
        if(score/10==7) iShowBMP(352-5,264, "7.bmp");
        if(score/10==8) iShowBMP(352-5,264, "8.bmp");
        if(score/10==9) iShowBMP(352-5,264, "9.bmp");
		}
}