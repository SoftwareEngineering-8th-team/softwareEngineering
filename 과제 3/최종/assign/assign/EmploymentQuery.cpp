#include "EmploymentQuery.h"

/*
    함수 이름 : EmploymentQuery::searchInfo
    기능 : EmploymentList로부터 데이터를 호출하여 id가 같은 경우 emp에 반환한다.
    전달 인자 : 없음
    반환 인자 : emp
*/
vector<EmploymentList>  EmploymentQuery::searchInfo(){
        vector<EmploymentList> emp;
        vector<EmploymentList>* getList = EmploymentList::getEmploymentList();
        for(int i=0; i<(*getList).size();i++){
            if((* getList)[i].getMember().getId()==g_loginInfo.id){
                emp.push_back((* getList)[i]);
            }
        }
        return emp;       
}

/*
    함수 이름 : EmploymentQueryUI::searchInfo
    기능 : 업무, 인원 수, 신청 마감일의 정보를 출력한다.
    전달 인자 : 없음
    반환 인자 : 없음
*/
void EmploymentQueryUI::serachInfo(){ 
        vector<EmploymentList> ret = employmentQuery->searchInfo();
        fprintf(out_fp,"3.2. 등록된 채용 정보 조회\n");
        for (EmploymentList emp: ret){
            fprintf(out_fp,"%s %d %s\n",emp.getWork().c_str(),emp.getApplicationNum(),emp.getDueDate().c_str());
        }
}
