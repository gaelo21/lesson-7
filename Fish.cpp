int solution(vector<int> &A, vector<int> &B) {
    // Implement your solution here
    int N = A.size();
    int res = N;
    stack<int> st1;

    for(int i = 0; i < N; ++i){
        if(B[i] == 1){ // ok
            st1.push(i);
        }
        else if(B[i] == 0 && !st1.empty()){
            while(!st1.empty() && A[st1.top()] < A[i]){
                --res;
                st1.pop();
            }
            if(!st1.empty() && A[i] < A[st1.top()]){
                --res;
            }
        }
    }

    return res;
}
