using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace E01 {
    /*
     * >> 컴포넌트란?
     * - 특정 역할을 수행하는 하나의 기능을 의미하며 해당 기능을 조합함으로써 
     * 특정 역할에 해당하는 사물을 표현하는 것이 가능하며 이러한 방식으로 프로그램의
     * 구조를 설계하는 방법을 컴포넌트 기반 프로그래밍이라고 한다.
     * 
     * Unity 는 컴포넌트를 기반으로 프로그램을 제작하기 때문에 Unity 에서는 여러 역할을
     * 수행하는 다양한 컴포넌트를 미리 제작해서 지원하고 있다.
     * 
     * 단, 해당 기능들만으로는 다양한 프로그램을 제작하는 것이 불가능하기 때문에 Unity에서는
     * 사용자 (프로그래머) 가 특정 프로그램에 맞는 커스텀한 컴포넌트를 제작 할 수 있는 
     * 기능을 제공하며, 해당 컴포넌트를 스크립트 컴포넌트라고 한다.
     * 
     * 즉, 스크립트 컴포넌트는 C# 언어를 통해 제작하는 것이 가능하며, 이렇게 제작된 컴포넌트는
     * 게임 오브젝트(객체)에 추가함으로써 동작시키는것이 가능하다.
     * 
     * Unity 의 게임 객체는 기본적으로 아무런 역할도 수행하지 않는 빈 객체이며, 해당 객체에
     * 어떤 컴포넌트를 추가하는지에 따라서 해당 객체의 역할이 달라진다. 즉, 게임 객체 자체는
     * 컴포넌트를 담을 수 있는 그릇과 같은 개념이다.
     * 
     * 
     * >> Unity 스크립트 컴포넌트 제작 방법
     * - 반드시 MonoBehaviour 클래스를 직접/간접적으로 상속
     * - 스크립트 파일명과 클래스 이름을 일치시킨다.
     * 
     * 즉, 위와 같은 조건을 따르지 않을 경우, 해당 클래스는 게임 객체가 추가 시킬 수 있는
     * 스크립트 컴포넌트가 아닌 일반적인 C# 클래스로 간주된다.
     * 따라서, 특정 게임 객체에 추가시킬 컴포넌트를 제작하는것이 아니라고 한다면, C# 클래스가
     * MonoBehaviour 클래스를 상속할 필요가 없다.
     */

    // Example 1
    public class CE01SceneManager : MonoBehaviour {
        public void Awake() {
            Debug.Log("Hello World!");
        }
    }
}