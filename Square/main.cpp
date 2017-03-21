//
//  main.cpp
//  Square
//
//  Created by MISTY on 2017. 3. 19..
//  Copyright © 2017년 MISTY. All rights reserved.
//

#include <iostream>

using namespace std;

class Square
{
    
private:
    double width, height, modWidth, modHeight;
    
public:
    double setWidth(), setHeight(), getArea();
    int job;
    
    void setWidth(int x1)
    {
        width = x1;
    }
    
    void setHeight(int y1)
    {
        height = y1;
    }
    
    double getArea(int a1, int x1, int y1)
    {
        return a1 = x1 * y1;
    }
    
    void modifyWidth(int x2)
    {
        modWidth = x2;
    }
    
    void modifyHeight(int y2)
    {
        modHeight = y2;
    }
    
};

int main()
{
    double a1, x1, x2 = 0.0, y1, y2 = 0.0;
    int job;
    
    cout << "가로의 길이를 입력해 주세요 : ";
        cin >> x1;

    cout << "세로의 길이를 입력해 주세요 : ";
        cin >> y1;
    
    cout << "사각형의 넓이는 " << x1 * y1 << "입니다." << endl;
 
    while(1)
    {
        cout << endl << "원하시는 작업을 선택하세요 " << "1.가로 길이 수정 " << "2.세로 길이 수정 " << "3.작업 종료" << endl;
        cin >> job;
    
        if(job==3) break;
        
        switch (job)
        {
            case(1) :
            {
                cout << "가로의 길이를 입력해 주세요 : ";
                cin >> x2;
                if(y2==0)
                {
                cout << "사각형의 넓이는 " << x2 * y1 << "입니다." << endl;
                }
                else
                {
                cout << "사각형의 넓이는 " << x2 * y2 << "입니다." << endl;
                }
                break;
            }
            
            case(2) :
            {
                cout << "세로의 길이를 입력해 주세요 : ";
                cin >> y2;
                if(x2==0)
                {
                cout << "사각형의 넓이는 " << x1 * y2 << "입니다." << endl;
                }
                else
                {
                cout << "사각형의 넓이는 " << x2 * y2 << "입니다." << endl;
                }
                break;
            }

            case(3) : { break; }
            default : cout << "다시 입력해주세요"; break;
        }
    }
    return 0;
}
