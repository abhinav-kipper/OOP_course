#include<stdio.h>
#include<string.h>
#include<C:\Users\Manoj\Desktop\OOP\SE\filematch.c>
#include<C:\Users\Manoj\Desktop\OOP\SE\patmatch_onlyreturn.c>
main()
{
    // Selecting Substrings  to be searched
    FILE *fp;
    char fname[20];
    printf("Enter file name :");
    gets(fname);
    fp=fopen(fname,"r");
    int i,j=0,k=0,p,datacount=0,countline=0;
    char data[20][50]={0},select[100];
    char ch,temp='#';
    ch=getc(fp);
    ch=getc(fp);
    while (!((ch = getc(fp))== '/' && temp=='*'))
    {
        if (ch==' ' || ch==',' || ch == '\n')
        {
            j++;
            k=0;
            datacount++;
           // printf("\n");
        }
        else{
                if (ch!='*')
            {data[j][k]=ch;
           // printf("%c %d %d\n",data[j][k],j,k);
            k++;}
        }
        temp=ch;
        if(ch=='\n')
        {
            countline++;
        }
    }
    fclose(fp);
printf("%d",countline);
    //Keywords searching
    char keywords[17][10]={"int","float","char","long","double","printf","scanf","for","while","FILE","fopen","fclose","while","if","else","break","continue"};

   //KeywordsSelectiveSearching_FalseOccur
     for(i=0;i<datacount;i++)
        {
            int l=-countline,a,b,c,q1=-1,qpresent=0,cpresent=0;
        FILE *fl=fopen(fname,"r");
         printf("\nfor ");
         puts(data[i]);
    while (fgets(select,100,fl)!=NULL) //Retrieving data line by line
    {
       if(l>0)
       {
            printf("\n\nLine %d :",l++);
            a=patmatch_r(select,data[i]);
            if (a!=-1)
            {
                for (p=0;p<17;p++)
                {
                    b=patmatch_r(select,keywords[p]);
                    if (b!=-1)
                    {
                        j=0;
                char quotes[50];
                char comment[50];
                while(select[j]!='\0')
                {
                    if (select[j]=='\"')
                    {
                        qpresent=1;
                        printf("%c",select[j]); //EXTRA QUOTE INDICATOR
                        if(select[q1]==select[j])
                        {
                            int q=0;
                          for (k=q1;k<=j;k++)
                          {
                              quotes[q]=select[k];
                              q++;
                          }
                          b=patmatch_r(quotes,data[i]);
                          if(b!=-1)
                          {
                          printf("\nString Matched at %d\n",b+q1);
                          break;}
                          else
                          {
                              printf("\nSubString is not found in this line.");
                              break;
                          }
                        }
                        q1=j;
                    }
                    if (j!=0)
                     {
                        if (select[j]=='/' && select[j+1]=='/')
                    {
                        cpresent=1;
                        k=j;
                        int f=0;
                        while(select[k]!='\0')
                        {
                            comment[f]=select[k];
                            f++;
                            k++;
                        }
                         b=patmatch_r(comment,data[i]);
                          if(b!=-1)
                          {
                          printf("\nString Matched at %d\n",b+j);
                          break;}
                          else
                          {
                              printf("\nSubString is not found in this line.");
                              break;
                          }


                    }
                     }


                    j++;
                }if (qpresent==0 && cpresent==0)
                {printf("NOT FOUND IN THIS LINE.");}
                    }
                    else patmatch(select,data[i]);
                }

            }
            else printf("\nSubString is not found in this line.");
       }
       else l++;
        //Pattern match called
    }
    fclose(fl);
        }

}
