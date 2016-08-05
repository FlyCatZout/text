#ifndef _VEC_H
#define _VEC_H
#include <math.h>
#include "../commom/func.h"
#include <algorithm>
namespace text{
	//�ı������㷨��
	class Vector{
	public:
		int m_size;
		int m_vocab;
		float** dict;
		std::map<std::string, int>strint;
		std::map<int, std::string>intstr;
	public:
		Vector();
		~Vector();
		//���شʵ�
		bool LoadVector(const char* sp, const char* filepath);	
		/*
		//��ȡ��������
		float* GetStrVector(std::string& str);
		//�������Ҿ���
		float Distance(std::string& str, std::string&  word);
		float Distance(float* v, std::string  word);		
		//ѵ��STR����
		bool Train(float* pravec,std::string& str,int flag);		
		//��ȡ���Ĵ�
		bool GetCenterWords(int n,const char* path);
		//�������Ҿ���TOPN
		bool TopCosin(std::string& str, std::vector<wdlen>& vec, int n);
		bool TopCosin(float* v,  std::vector<wdlen>& vec , int n);			
		//��ȡ��������
		bool GetCenter(float* v,  std::vector<std::string>& vec);
		*/
		//K-Means����
		bool Kmeans(int k, int  iter,const char* outpath);
	};
}
#endif