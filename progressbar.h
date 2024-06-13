void scoresprite(int score){
	    if(score==0) iShowBMP(iScreenWidth/2, iScreenHeight-50, "0.bmp");
        if(score==1) iShowBMP(iScreenWidth/2, iScreenHeight-50, "1.bmp");
        if(score==2) iShowBMP(iScreenWidth/2, iScreenHeight-50, "2.bmp");
        if(score==3) iShowBMP(iScreenWidth/2, iScreenHeight-50, "3.bmp");
        if(score==4) iShowBMP(iScreenWidth/2, iScreenHeight-50, "4.bmp");
        if(score==5) iShowBMP(iScreenWidth/2, iScreenHeight-50, "5.bmp");
        if(score==6) iShowBMP(iScreenWidth/2, iScreenHeight-50, "6.bmp");
        if(score==7) iShowBMP(iScreenWidth/2, iScreenHeight-50, "7.bmp");
        if(score==8) iShowBMP(iScreenWidth/2, iScreenHeight-50, "8.bmp");
        if(score==9) iShowBMP(iScreenWidth/2, iScreenHeight-50, "9.bmp");
        if(score>9 && score<100 ){
		if(score%10==0) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "0.bmp");
        if(score%10==1) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "1.bmp");
        if(score%10==2) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "2.bmp");
        if(score%10==3) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "3.bmp");
        if(score%10==4) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "4.bmp");
        if(score%10==5) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "5.bmp");
        if(score%10==6) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "6.bmp");
        if(score%10==7) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "7.bmp");
        if(score%10==8) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "8.bmp");
        if(score%10==9) iShowBMP(iScreenWidth/2+15, iScreenHeight-50, "9.bmp");
		//if(score%10==0) iShowBMP(iScreenWidth/2+5, iScreenHeight-50, "0.bmp");
        if(score/10==1) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "1.bmp");
        if(score/10==2) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "2.bmp");
        if(score/10==3) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "3.bmp");
        if(score/10==4) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "4.bmp");
        if(score/10==5) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "5.bmp");
        if(score/10==6) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "6.bmp");
        if(score/10==7) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "7.bmp");
        if(score/10==8) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "8.bmp");
        if(score/10==9) iShowBMP(iScreenWidth/2-5, iScreenHeight-50, "9.bmp");
		}
}

void gameover_score(int points){
	    if(points==0) iShowBMP(352,240, "0.bmp");
        if(points==1) iShowBMP(352,240, "1.bmp");
        if(points==2) iShowBMP(352,240, "2.bmp");
        if(points==3) iShowBMP(352,240, "3.bmp");
        if(points==4) iShowBMP(352,240, "4.bmp");
        if(points==5) iShowBMP(352,240, "5.bmp");
        if(points==6) iShowBMP(352,240, "6.bmp");
        if(points==7) iShowBMP(352,240, "7.bmp");
        if(points==8) iShowBMP(352,240, "8.bmp");
        if(points==9) iShowBMP(352,240, "9.bmp");
        if(points>9 && points<100 ){
		if(points%10==0) iShowBMP(352+15,240, "0.bmp");
        if(points%10==1) iShowBMP(352+15,240, "1.bmp");
        if(points%10==2) iShowBMP(352+15,240, "2.bmp");
        if(points%10==3) iShowBMP(352+15,240, "3.bmp");
        if(points%10==4) iShowBMP(352+15,240, "4.bmp");
        if(points%10==5) iShowBMP(352+15,240, "5.bmp");
        if(points%10==6) iShowBMP(352+15,240, "6.bmp");
        if(points%10==7) iShowBMP(352+15,240, "7.bmp");
        if(points%10==8) iShowBMP(352+15,240, "8.bmp");
        if(points%10==9) iShowBMP(352+15,240, "9.bmp");
		//if(score%10==0) iShowBMP(iScreenWidth/2+5, iScreenHeight-50, "0.bmp");
        if(points/10==1) iShowBMP(352-5,240, "1.bmp");
        if(points/10==2) iShowBMP(352-5,240, "2.bmp");
        if(points/10==3) iShowBMP(352-5,240, "3.bmp");
        if(points/10==4) iShowBMP(352-5,240, "4.bmp");
        if(points/10==5) iShowBMP(352-5,240, "5.bmp");
        if(points/10==6) iShowBMP(352-5,240, "6.bmp");
        if(points/10==7) iShowBMP(352-5,240, "7.bmp");
        if(points/10==8) iShowBMP(352-5,240, "8.bmp");
        if(points/10==9) iShowBMP(352-5,240, "9.bmp");
		}
}

void maxscore(int max_score){
	    if(max_score==0) iShowBMP(352,195, "0.bmp");
        if(max_score==1) iShowBMP(352,195, "1.bmp");
        if(max_score==2) iShowBMP(352,195, "2.bmp");
        if(max_score==3) iShowBMP(352,195, "3.bmp");
        if(max_score==4) iShowBMP(352,195, "4.bmp");
        if(max_score==5) iShowBMP(352,195, "5.bmp");
        if(max_score==6) iShowBMP(352,195, "6.bmp");
        if(max_score==7) iShowBMP(352,195, "7.bmp");
        if(max_score==8) iShowBMP(352,195, "8.bmp");
        if(max_score==9) iShowBMP(352,195, "9.bmp");
        if(max_score>9 && max_score<100 ){
		if(max_score%10==0) iShowBMP(352+15,195, "0.bmp");
        if(max_score%10==1) iShowBMP(352+15,195, "1.bmp");
        if(max_score%10==2) iShowBMP(352+15,195, "2.bmp");
        if(max_score%10==3) iShowBMP(352+15,195, "3.bmp");
        if(max_score%10==4) iShowBMP(352+15,195, "4.bmp");
        if(max_score%10==5) iShowBMP(352+15,195, "5.bmp");
        if(max_score%10==6) iShowBMP(352+15,195, "6.bmp");
        if(max_score%10==7) iShowBMP(352+15,195, "7.bmp");
        if(max_score%10==8) iShowBMP(352+15,195, "8.bmp");
        if(max_score%10==9) iShowBMP(352+15,195, "9.bmp");
		//if(score%10==0) iShowBMP(iScreenWidth/2+5, iScreenHeight-50, "0.bmp");
        if(max_score/10==1) iShowBMP(352-5,195, "1.bmp");
        if(max_score/10==2) iShowBMP(352-5,195, "2.bmp");
        if(max_score/10==3) iShowBMP(352-5,195, "3.bmp");
        if(max_score/10==4) iShowBMP(352-5,195, "4.bmp");
        if(max_score/10==5) iShowBMP(352-5,195, "5.bmp");
        if(max_score/10==6) iShowBMP(352-5,195, "6.bmp");
        if(max_score/10==7) iShowBMP(352-5,195, "7.bmp");
        if(max_score/10==8) iShowBMP(352-5,195, "8.bmp");
        if(max_score/10==9) iShowBMP(352-5,195, "9.bmp");
		}
}