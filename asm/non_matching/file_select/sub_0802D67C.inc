	THUMB_FUNC_START sub_0802D67C
sub_0802D67C: @ 0x0802D67C
	push {r4,lr}
	ldr r4, _0802D6C4  @ =gUnknown_03000420
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	ldr r2, _0802D6C8  @ =gUnknown_0202D138
	add r0, r0, r2
	mov r1, #160
	lsl r1, r1, #1
	add r3, r0, r1
	ldr r1, _0802D6CC  @ =gUnknown_0813D778
	ldrh r0, [r1]
	strh r0, [r3]
	ldrh r0, [r1, #2]
	strh r0, [r3, #2]
	ldrh r0, [r1, #4]
	strh r0, [r3, #4]
	ldrb r0, [r4, #3]
	lsl r0, r0, #11
	add r0, r0, r2
	mov r2, #224
	lsl r2, r2, #2
	add r3, r0, r2
	ldrh r0, [r1, #6]
	strh r0, [r3]
	ldrh r0, [r1, #8]
	strh r0, [r3, #2]
	ldrh r0, [r1, #10]
	strh r0, [r3, #4]
	ldrb r0, [r4, #10]
	cmp r0, #4
	bhi _0802D6D4
	lsl r0, r0, #2
	ldr r1, _0802D6D0  @ =gUnknown_0813D784
	add r0, r0, r1
	b _0802D6D6
	.byte 0x00
	.byte 0x00
_0802D6C4:
	.4byte gUnknown_03000420
_0802D6C8:
	.4byte gUnknown_0202D138
_0802D6CC:
	.4byte gUnknown_0813D778
_0802D6D0:
	.4byte gUnknown_0813D784
_0802D6D4:
	ldr r0, _0802D6E8  @ =gUnknown_0813D794
_0802D6D6:
	bl sub_0802D620
	ldr r1, _0802D6EC  @ =gUnknown_03000420
	mov r0, #1
	strb r0, [r1, #2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D6E8:
	.4byte gUnknown_0813D794
_0802D6EC:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802D67C

