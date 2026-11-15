	THUMB_FUNC_START sub_0800EA38
sub_0800EA38: @ 0x0800EA38
	push {r4,lr}
	ldr r3, _0800EA94  @ =gUnknown_0201EF00
	ldrb r0, [r3]
	cmp r0, #1
	bls _0800EA8E
	mov r0, #3
	ldrsb r0, [r3, r0]
	add r4, r3, #0
	add r4, r4, #8
	add r0, r0, r4
	ldrb r0, [r0]
	cmp r0, #2
	bhi _0800EA8E
	ldr r0, _0800EA98  @ =gUnknown_03000420
	ldrb r2, [r0, #3]
	lsl r1, r2, #3
	ldr r0, _0800EA9C  @ =gUnknown_020309C0
	add r1, r1, r0
	ldrb r0, [r1, #5]
	lsl r0, r0, #5
	ldrb r1, [r1, #4]
	add r0, r0, r1
	lsl r2, r2, #11
	lsl r0, r0, #1
	ldr r1, _0800EAA0  @ =gBG0Buffer
	add r0, r0, r1
	add r2, r2, r0
	ldrb r0, [r3, #3]
	add r1, r3, #4
	add r1, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	lsl r0, r0, #5
	ldrb r1, [r1]
	add r0, r0, r1
	add r0, r0, #33
	lsl r0, r0, #1
	add r0, r0, r2
	mov r1, #149
	strh r1, [r0]
	add r0, r0, #64
	mov r1, #150
	strh r1, [r0]
_0800EA8E:
	pop {r4}
	pop {r0}
	bx r0
_0800EA94:
	.4byte gUnknown_0201EF00
_0800EA98:
	.4byte gUnknown_03000420
_0800EA9C:
	.4byte gUnknown_020309C0
_0800EAA0:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_0800EA38

