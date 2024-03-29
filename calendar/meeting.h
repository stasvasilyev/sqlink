#ifndef MEETING_H
#define MEETING_H
#include <string>

using namespace std;

class Meeting_t
{
public:
   ~Meeting_t() {}
    Meeting_t(float begin, float end, const string& subject) : m_begin(begin), m_end(end), m_subject(subject) {}
    float getEnd() const
    {
        return m_end;
    }
    const string& getSubject() const
    {
        return m_subject;
    }
    float getBegin() const
    {
        return m_begin;
    }

private:
    Meeting_t(const Meeting_t& m);
    Meeting_t& operator=(const Meeting_t& m);

    float   m_begin;
    float   m_end;
    string  m_subject;
};
#endif // MEETING_H
