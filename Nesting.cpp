int solution(string &S) {
    // Implement your solution here
    stack<char> st;
    const int N = S.size();
    if(N == 0)
        return 1;

    if(N%2 != 0)
        return 0;
    
    for(int c = 0; c < N; ++c){
        if(S[c] == '(')
            st.push(S[c]);
        else if(!st.empty() && st.top() == '(')
            st.pop();
        else
            return 0;
    }

    return (st.empty() ? 1 : 0);
}
