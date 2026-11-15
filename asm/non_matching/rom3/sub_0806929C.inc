	THUMB_FUNC_START sub_0806929C
sub_0806929C: @ 0x0806929C
	push {lr}
	lsl r0, r0, #24
	cmp r0, #0
	bne _080692B8
	mov r1, #192
	lsl r1, r1, #18
	mov r0, #137
	strb r0, [r1, #10]
	mov r0, #95
	strb r0, [r1, #11]
	mov r0, #90
	strb r0, [r1, #12]
	mov r0, #3
	b _080692CE
_080692B8:
	mov r1, #192
	lsl r1, r1, #18
	mov r0, #76
	strb r0, [r1, #10]
	mov r0, #105
	strb r0, [r1, #11]
	mov r0, #110
	strb r0, [r1, #12]
	mov r0, #107
	strb r0, [r1, #13]
	mov r0, #4
_080692CE:
	strb r0, [r1, #9]
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806929C

