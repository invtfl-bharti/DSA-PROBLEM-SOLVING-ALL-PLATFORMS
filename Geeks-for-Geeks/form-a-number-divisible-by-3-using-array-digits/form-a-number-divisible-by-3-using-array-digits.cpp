class Solution
{
public:
    int isPossible(int N, int arr[])
    {
        // code here
        int result = 0;
        string result_str = "";
        // int sum;
        for (int i = 0; i < N; i++)
        {

            for (int j = 0; j < N; j++)
            {
                string str = to_string(i);
                result_str += str;
                result = stoi(result_str);

                if (result % 3 == 0)
                {
                    return 1;
                }

                result = 0;
            }

            result_str = "";

        }
        return 0;
    }
};
