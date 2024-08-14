                if(len1 == len2 && len2 == len3){
                    cnt += (len - i-1)*3;
                    if(cnt == len*3)
                        if(s1[0] == s2[0] && s2[0] == s3[0])
                            cnt = 0;
                        else
                            cnt = -1;
                    //cout << "--1";
                    return cnt;
                }
                else if(len1 < len2){
                    if(len2 <= len3){
                        cnt += (len3 +len2+len1 - 3*(i+1));
                        //cout << "--2";
                        return cnt;
                    }
                    else if(len2 > len3){
                        if(len3 < len1){
                            cnt += (len1 +len2+len3- 3*(i+1));
                            //cout << "--3";
                            return cnt;
                        }
                        else if(len3 > len1){
                            cnt += (len2 +len3 - 2*(i+1));
                            //cout << "--33";
                            return cnt;
                        }
                        else{
                            cnt += (len2 +len3 +len1- 3*(i+1));
                            //cout << "--33";
                            return cnt;
                        }
                    }
                }
                else if(len1 < len3){
                    if(len2 <= len3){
                        if(len1 < len2){
                            cnt += (len3 +len2 - 2*(i+1));
                            //cout << "--4";
                            return cnt;
                        }
                        else{
                            cnt += (len1 + len3 - 2*(i+1));
                            //cout << "--5";
                            return cnt;
                        }
                    }
                    if(len2 > len3){
                        cnt += (len3 +len2 - 2*(i+1));
                        if(cnt == (len2+len3))
                            cnt = -1;
                        //cout << "--6";
                        return cnt;                        
                    }
                    
                }
                else if(len2 < len3){
                    cnt += (len3 + len1 - 2*(i+1));
                    //cout << "--7";
                    return cnt;
                }
                else if(len2 > len3){
                    cnt += (len2 + len1 - 2*(i+1));
                    //cout << "--8";
                    return cnt;
                }
                else{
                    cnt += (len2 +len3 +len1- 3*(i+1));
                    //cout << "--33";
                    return cnt;
                }
            }