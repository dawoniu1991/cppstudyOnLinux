TEST_SRC = $(wildcard tests/test_*.cc)
TEST = $(patsubst tests/test_%.cc, tests/test_%, $(TEST_SRC))


test001: $(TEST)
	@echo "res==$(TEST_SRC)"
	@echo "src====$(TEST)"
tests/% : tests/%.cc build/pp.a
	@echo "00==$*"
	@echo "11=tests/$*"
	@echo "22=$<"
	@echo "33=$^"
	@echo "44=tests/$*.d"
	@echo "55=$(filter %.cc %.a, $^)"
