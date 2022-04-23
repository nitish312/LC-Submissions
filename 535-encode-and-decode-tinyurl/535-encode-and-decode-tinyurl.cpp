class Solution {
public:

    string v;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        v = longUrl;
        return "";
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return v;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));