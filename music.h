#ifndef __MUSIC_H__
code const unsigned int scale_table[][12]={//音阶频率表
{262,277,294,311,330,349,370,392,415,440,464,494},	//低音
{523,554,587,622,659,698,740,784,831,880,932,998},	//中音
{1046,1109,1175,1245,1318,1397,1480,1568,1661,1760,1865,1976} //高音
};
typedef struct { //定义音乐结构体
unsigned char scale;//音阶，高四字节表示高中低音（高-2，中-1，低-0），低四字节表示音阶（从1开始）
unsigned char time;//持续时间，单位:0.1s
} music;

music current={0x0,10};//当前播放的音阶
const music code *opern=0;//当前播放的曲谱
unsigned int  opern_count_max;//当前曲谱的最大音阶数

const   music code liangzhilaohu[]={ //一首曲谱(两只老虎部分)
{0x11,4},
{0x13,4},
{0x15,4},
{0x11,4},
//{0x00,1},
{0x11,4},
{0x13,4},
{0x15,4},
{0x11,4},
//{0x00,1},
{0x15,4},
{0x16,4},
{0x18,4},
//{0x00,1},
{0x15,4},
{0x16,4},
{0x18,4},
//{0x00,1}
{0x18,3},
{0x1a,3},
{0x18,3},
{0x16,3},
{0x15,4},
{0x11,4},
{0x18,3},
{0x1a,3},
{0x18,3},
{0x16,3},
{0x15,4},
{0x01,4},
{0x11,4},
{0x18,4},
{0x11,4},
{0x11,4},
{0x18,4},
{0x11,4},
{0x00,10}
};




#define __MUSIC_H__
#endif