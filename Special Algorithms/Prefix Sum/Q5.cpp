class Solution
{
public:
  vector<int> corpFlightBookings(vector<vector<int>> &bookings, int n)
  {
    vector<int> answer(n + 1, 0);

    for (auto booking : bookings)
    {
      int first = booking[0];
      int last = booking[1];
      int seats = booking[2];

      answer[first - 1] += seats;
      if (last < n)
      {
        answer[last] -= seats;
      }
    }

    for (int i = 1; i < n; ++i)
    {
      answer[i] += answer[i - 1];
    }

    answer.pop_back();
    return answer;
  }
};