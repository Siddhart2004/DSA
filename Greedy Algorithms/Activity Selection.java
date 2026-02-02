import java.util.*;

class Activity{
    int start,finish;
    Activity(int start,int finish){
        this.start=start;
        this.finish=finish;
    }
}
class Solution{
    static int activitySelection(int[] start,int[] finish){
        int n=start.length;
        Activity[] activities=new Activity[n];
        for(int i=0;i<n;i++)
            activities[i]=new Activity(start[i],finish[i]);
        Arrays.sort(activities,(a,b)->a.finish-b.finish);
        int count=1;
        int lastFinish=activities[0].finish;

        for(int i=1;i<n;i++){
            if(activities[i].start>=lastFinish){
                count++;
                lastFinish=activities[i].finish;
            }
        }
        return count;
    }
}
