int solution(string &S) {
    // Implement your solution here
    stack<char> st;
    int N = S.size();
    if(N%2 != 0)
        return 0;

    if(S.empty())
        return 1;
        
    for(auto i : S){
        switch(i){
            case ')':
                if(st.empty() || st.top() != '(')
                    return 0;
                else
                    st.pop();
                break;
            case ']':
                if(st.empty() || st.top() != '[')
                    return 0;
                else
                    st.pop();
                break;
            case '}':
                if(st.empty() || st.top() != '{')
                    return 0;
                else
                    st.pop();
                break;
            default:
                st.push(i);
        }
    }

    return (st.empty() ? 1 : 0);

}
