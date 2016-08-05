/*�ı������㷨*/
#ifndef _LDA_H
#define _LDA_H
#include <math.h>
#include "../commom/func.h"
#include "time.h"
#include "vec.h"
#define VECSIZE  200
#define HASHSIZE  64
#include <algorithm>
namespace text{
class Lda{
	public:
		Vector vec;
		int K, vocab, newM;
		float alpha,  beta;
		float* p; //������
		int** newwdvec;
		int** docvec;
		int** newz;
		int** id;
		int* newwdsun;
		int * doclen;
		int* oldwdsun;
		std::map<std::string,int>strint;
		std::map<int,std::string>intstr;
	public:
		Lda(int x);
		~Lda();
		//��ʼ������
		bool Init(const char* path);
		bool LoadVector(const char* filepath);
		void Inference(int niters);
		//����˹����
		int Sampling(int m, int n);
		//���������µ�����ֲ�
		void ComputeNewtheta(const char* path);
	};

}
#endif