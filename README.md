# basic-cpp-2023
IoT 개발자과정 C++ 학습 리포지토리


## 1일차
- 클래스, 구조체 개념
- printf() / scanf()
- 선택제어문
  - if
  - switch

- 반복제어문
  - for
  - while
- 오버로딩; 다중정의
- 매개변수의 디폴트값; 기본적으로 설정되어 있는 값
  - 선언된 매개변수의 수보다 적은 수의 인자전달이 가능
  - 전달되는 인자는 왼쪽부터 채워짐
  - 부족분은 디폴트 값으로 채워짐

     <img src= "https://raw.githubusercontent.com/limchaeyeon8/basic-cpp-2023/main/C%2B%2B/baseC%2B%2B/baseC%2B%2B/code/defaultValue_1.png" width="400" />

- 매크로 함수
  - 장점: 일반적인 함수에 비해 실행속도 빠름,  자료형이 필요 없음
  - 단점: 복잡한 함수를 매크로 형태로 정의하는데 한계

- 인라인 함수 정의

## 2일차
- 이름공간(namespace)에 대한 소개
  - 이름공간 안에 함수 정의/변수 선언하면 이름충돌 발생X
  - 동일한 이름공간에 정의된 함수를 호출할 때에는 이름공간을 명시할 필요X
  - using
  - 이름공간의 별칭 지정
- const
  - 상수화는 선언 시 바로 초기화 시켜야 함
  - 포인터 - 데이터 값 상수화 / 포인터 변수 상수화
- 자료형 bool

## 3일차
- 참조자
  - 반환형이 참조형인 경우
  - 변수만 참조가 가능
    - const 참조자는 상수도 참조 가능
- malloc & free를 대신하는 new & delete
  - 힙 영역
- C++에서 C언어 표준함수 호출
  - .h 생략 / 앞에 c 붙임

-  C++구조체 
  - 구조체; 사용자 정의 자료형
  - C 구조체 --발전--> class
  - 클래스(= C++ 구조체) = 멤버변수 + 멤버함수
  - struct - typedef 선언 없이도 변수 선언 가능
  - 구조체 멤버변수에 저장될 값은 구조체변수선언 시 초기화시켜줌
  - 구조체 안에 함수 삽입
- Class / Object
  - 클래스 선언 / 클래스 정의
  - 객체지향 프로그래밍
    - 클래스 기반 두 가지 객체생성 방법 - 일반적 변수의 선언 / 동적 할당(힙 할당) 방식
  - 정보은닉 / 캡슐화

## 4일차
- const 함수
  - 멤버변수에 저장된 값을 변경하지 않겠다는 선언
  - const 참조자를 이용해서는 const 함수만 호출 가능
- 캡슐화
  - 정보은닉 : 숨기는 것 / 캡슐화 : 연관된 것을 묶어 클래스로 설계
- 생성자 / 소멸자
  - 생성자 특성 : 생성자명 = 클래스명, 반환형 선언X(출력X), 객체 생성시 딱 한 번 호출됨
  - 객체생성과정에서 자동으로 호출되는 생성자에게 전달할 인자의 정보 추가해야 함
  - 생성자도 함수의 일종 => 오버로딩 가능 / 매개변수에 디폴트 값 설정 가능
- Member Initializer
  - const 멤버변수도 이니셜라이저 이용하여 초기화 가능
  - 참조자도 멤버변수로 선언 가능
- 디폴트 생성자
 -객체가 되기 위해서는 반드시 하나의 생성자가 호출되어야 함
- 생성자 불일치
- private 생성자
- 소멸자
  - 객체소멸시 반드시 호출되는 것
  - 출력(반환) X
  - 오버로딩, 디폴트 값 설정 불가능
  
## 5일차
- 클래스 / 디폴트 생성자 / 동적할당 / 소멸자 복습
- 객체 기반 배열
- 객체 포인터 배열
- this 포인터
  - 2개의 멤버변수 초기화를 위해선 두 개의 매개변수 필요
  - 함수의 매개변수 이름이 멤버변수의 이름과 동일한 경우
    =>함수 내에서 멤버변수를 의도했던 이름은 매개변수를 의미하게 된다
    =>변수의 이름만 참조하는 방법으로는 함수 내에서 멤버변수 접근이 불가능
  - this 포인터 활용하면 매개변수의 이름을 멤버변수의 이름과 달리 할 필요 X
  -객체별로 멤버변수 할당
  스텍형 - 멤버변수는 메모리 할당 O
  메소드 - 메모리 할당 X => 멤버변수 공유 - 어떤 객체가 메소드 호출했는지 구분하기 위해 this  필요
- Self-Reference의 반환
  - Self-Reference: 객체 자신을 참조할 수 있는 참조자
- 복사 생성자
  - 멤버변수를 스텍영역에 할당할 때 디폴트 복사 생성자 생성, 자동으로 호출
  - new 연산자로 힙영역에 메모리 할당 받을 때 delete 메모리 해제 시 문제
  - 깊은 복사 / 얕은 복사
  - 임시객체

## 6일차
- const 보충
  - const 객체 / 객체특성
  - const 함수 오버로딩(매개변수의 수나 자료형이 달라야 성립)
- 클래스와 함수에 대한 friend 선언
  - private 멤버의 접근을 허용하는 선언
- static
  - 전역변수에 선언; 선언된 파일 내에서만 참조 허용
  - 함수 내에 선언; 한번만 초기화, 지역변수와 달리 함수를 빠져나가도 소멸X
  - 전역변수 - 어디서나 건들일 수 있어 데이터값 변경의 위험이 있음 (쉽게 못 접근하도록 static 사용 권장)
  - static 멤버변수의 소속 => class
  - 멤버변수가 프로그램 시작될 때 자동적으로 정적데이터 영역에 바로 할당됨
- const static
- 상속(inheritance)
  - control클래스 == handler 클래스; 기능의 처리를 실제로 담당하는 클래스
  - 유연성 / 확장성
  - 상속 관계의 생성자 호출 및 실행 순서
- 유도 클래스의 객체 생성과정
  - 유도 클래스의 객체 생성과정에서 기초클래스의 생성자는 100% 호출됨
  - 유도 클래스의 생성자에서 기초 클래스의 생성자 호출을 명시하지 않으면, 기초 클래스의 void 생성자가 호출됨
- protected 선언과 세 가지 형태의 상속
  - 허용하는 접근 범위: private < protected < public
  - protected로 선언된 멤버변수는 이를 상속하는 유도 클래스에서 접근이 가능
- IS-A관계

## 7일차
- 객체 포인터 변수
  - 간접 상속
- 스텍 메모리공간 < 힙 메모리공간 / 속도 : 스텍 > 힙
  - 렘(주메모리); 하드디스크에 저장된 프로그램을 사용할 수 있도록 메모리 할당
  - new delete - 자원 관리차원에서 사용
  - 이름 저장할 수 있는 배열의 크기를 지정(선언)할 때
    - 스택은 미리 지정 => 남는 공간 생겨 자원낭비
    - 힙 => 전달받는 크기만큼 사용
- 가상함수(Virtual Function)
- 순수(Pure) 가상함수; 함수의 몸체가 정의되지 않은 함수
- 추상 클래스(Abstract Class); 하나 이상의 멤버함수를 순수 가상함수로 선언한 클래스
- 다형성(Polymorphism)