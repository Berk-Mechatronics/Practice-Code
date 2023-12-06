def bayesTheorem(pA, pB_A):
    return pB_A * pA / ((pB_A * pA) + ((1 - pA) * (1 - pB_A)))

def bayesFilter(p_prior, p_obs_given_true, p_obs_given_false):
    return p_prior * p_obs_given_true / ((p_prior * p_obs_given_true) + ((1 - p_prior) * (1 - p_obs_given_false)))

# 9 out of 10 taxis are green
pA = 1/10
pB_A = 0.75

pB = pB_A * pA + (1 - pA) * (1 - pB_A)
pA_given_A = bayesTheorem(pA, pB_A)

# 7 out of 10 taxis are green
pA = 3/10
pB = pB_A * pA + (1 - pA) * (1 - pB_A)
pA_given_B = bayesTheorem(pA, pB_A)

# color-blind
pC_A = 0.5
pB_C = pB_A * pC_A * pA + (1 - pA) * (1 - pB_A) * (1 - pC_A) * (1 - pA)
pA_given_B_C = bayesTheorem(pA, pB_C)

print(f"a) Probability of the taxi being blue: {pA_given_A:.5f}")
print(f"b) Probability of the taxi being green: {pA_given_B:.5f}")
print(f"c) Probability of the taxi being blue with a color-blind witness: {pA_given_B_C:.5f}")

## Bayes Filter

p_dirty_prior = 0.5
p_z_clean_given_dirty = 0.7
p_z_clean_given_clean = 0.9

p_dirty_given_cleaned = bayesFilter(p_dirty_prior, p_z_clean_given_dirty, p_z_clean_given_clean)

print(f"Bayes Filter: Probability that the floor is still dirty after cleaning: {p_dirty_given_cleaned:.5f}")

