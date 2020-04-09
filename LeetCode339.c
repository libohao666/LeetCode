int q(struct NestedInteger** l, int ls, int depth){
    int ret = 0, size;
    for (int i = 0; i < ls; i++) {
        if (NestedIntegerIsInteger(l[i])) 
            ret += depth * NestedIntegerGetInteger(l[i]);
        else {
            struct NestedInteger** tmp = NestedIntegerGetList(l[i]);
            size = NestedIntegerGetListSize(l[i]);
            ret += q(tmp, size, depth + 1);
        }
    }
    return ret;
}

int depthSum(struct NestedInteger** nestedList, int nestedListSize){
    return q(nestedList, nestedListSize, 1);
}
