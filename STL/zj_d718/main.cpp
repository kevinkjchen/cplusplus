/*
ZJ d718: Waiting In Line (https://zerojudge.tw/ShowProblem?problemid=d718)

1. 依照題目中說的 N 個團隊 ,1 <= N <= 1000, 來實作, 結果會是75%:
    #0: 25% AC (2ms, 388KB)
    通過檢測
    #1: 25% WA (line:869)
    您的答案為: 124
    正確答案為: 8328
    #2: 25% AC (0.1s, 1.5MB)
    通過檢測
    #3: 25% AC (0.2s, 5MB)
    通過檢測
改為 1 <= N <= 10000 來實作才會通過

2. 分別以 queue, vector, list 來實作, 比較 speed and memory:
  整體隊伍line  團隊隊伍team_line  結果               備註
  ------------  -----------------  ----------------  --------------------------------
  queue         queue              AC (0.1s, 11MB)   整體隊伍line中放的是team number, 或id+1000000(不屬於任何團隊的人)
  vector        vector             AC (0.2s, 5.2MB)  因為是從前面移除元素所以queue比vector快
  list          None               AC (83ms, 6.4MB)  用陣列記錄每個團隊最後一人的位址(iterator)
*/

#include <bits/stdc++.h>
using namespace std;

//vector<int> line;
//vector<int>::iterator it;
list<int> line;
//vector<int> team_line[10005];
list<int>::iterator team_it[10005];
//bool in_line[10005];
int cnt_in_line[10005];
//unordered_set<int> st[10005];
int team_no[1000005]; //記錄每個人屬於哪個team(0:表示不屬於任何團隊)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("data.in", "r", stdin);

    int line_no=1, teams, members, id, tm;
    string str;

    while(cin >> teams){
        cout << "Line #" << line_no++ << '\n';
        line.clear();
        fill(team_no, team_no+1000001, 0);

        for(int i=1; i<=teams; i++){
            cin >> members;

            //teams初始化
            //st[i].clear();
            //team_line[i].clear();
            //fill(team_it, team_it+10001, 0);
            fill(cnt_in_line, cnt_in_line+10001, 0);

            for(int j=0; j< members; j++){
                cin >> id;
                //st[i].insert(id); //把第i個團隊成員存入st[i]
                team_no[id] = i;    //建立由 id => team number 的table
                //cout << "st[" << i << "]=" << id << endl;
            }
        }

        while(cin >> str){
            if(str == "ENQUEUE"){
                cin >> id;
                /*
                tm = 0;
                //檢查要加入的人是否在哪個團隊中
                for(int i=1; i<=teams; i++){
                    if(st[i].count(id)){
                        tm = i;
                        break;
                    }
                }*/
                tm = team_no[id];

                if(tm != 0){ //要加入的人屬於編號為tm的團隊

                    if(!cnt_in_line[tm]){ //隊伍中沒有那個團隊的人
                        line.push_back(id);             //把 id 加到line最後面
                        team_it[tm] = --line.end();     //記錄團隊最後一人的位址(iterator)
                        //cout << "*iterator after insert=" << *(team_it[tm]) << endl;
                    }else{
                        list<int>::iterator tmp_it = team_it[tm];   //團隊最後一人的位址(iterator)
                        team_it[tm] = line.insert(++tmp_it, id);      //把要新增的人加到iterator的下一個位置, return為新加入者的iterator
                        //cout << "return *iterator after insert=" << *(team_it[tm]) << endl;
                    }
                    cnt_in_line[tm]++;

                    //cout << "tm=" << tm << "id=" << id << endl;

                }else{ //要加入的人不屬於任何團隊,
                    line.push_back(id); //把 id 加到line最後面
                    //cout << "tm=" << 0 << "id=" << id << endl;
                }

                //cout << "line.front()=" << line.front() << endl;
            }else if(str == "DEQUEUE"){
                tm = team_no[line.front()];
                if(tm){
                    cnt_in_line[tm]--;
                }
                cout << line.front() << '\n';
                line.pop_front();
            }else if(str == "STOP"){
                break;
            }
        }
    }
    return 0;
}

