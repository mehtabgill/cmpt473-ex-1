#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "../lib/simple/include/Awards.h"

using namespace awards;
using ::testing::Return;
using ::testing::InSequence;

class RankListStub : public RankList{
    public:
        MOCK_METHOD0(getNext, std::string());
};

class AwardCeremonyMock: public AwardCeremonyActions{
    public:
        MOCK_METHOD0(playAnthem, void());
        MOCK_METHOD0(turnOffTheLightsAndGoHome, void());
        MOCK_METHOD1(awardBronze, void(std::string recipient));
        MOCK_METHOD1(awardSilver, void(std::string recipient));
        MOCK_METHOD1(awardGold, void(std::string recipient));
};


TEST(AwardsTests, performAwardTest){
    RankListStub rankList;
    EXPECT_CALL(rankList, getNext())
        .Times(3)
        .WillOnce(Return("Bronaze"))
        .WillOnce(Return("Silver"))
        .WillOnce(Return("Gold"));

    AwardCeremonyMock awards;
    InSequence seq;
    EXPECT_CALL(awards, playAnthem())
        .Times(1);
    EXPECT_CALL(awards, awardBronze("Bronaze"))
        .Times(1);
    EXPECT_CALL(awards, awardSilver("Silver"))
        .Times(1);
    EXPECT_CALL(awards, awardGold("Gold"))
        .Times(1); 
    EXPECT_CALL(awards, turnOffTheLightsAndGoHome())
        .Times(1);

    awards::performAwardCeremony(rankList, awards);

}