#include <string>
#include <iostream>
#include <map>

class VeryHeavyDatabase {
public:
    std::string GetData(const std::string& key) const noexcept {
        return "Very Big Data String: " + key;
    }
};

class OneShotDB : public VeryHeavyDatabase {
public:
    explicit OneShotDB(VeryHeavyDatabase* real_object, size_t shots=1) : real_db_(real_object) , count_(shots) {}

   std::string GetData(const std::string& key) noexcept {
 
        if(count_ != 0) {
            
            --count_;

        } else {
            return "error";
        }
        return real_db_->GetData(key);
    }

private:
    VeryHeavyDatabase* real_db_ = nullptr;
    int count_ = 0;
};

int main() {

    auto real_db = VeryHeavyDatabase();
    auto limit_db = OneShotDB(std::addressof(real_db), 2);
    std::cout << limit_db.GetData("key") << std::endl;
    std::cout << limit_db.GetData("key") << std::endl;
    std::cout << limit_db.GetData("key") << std::endl;

}