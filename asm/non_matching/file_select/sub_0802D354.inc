	THUMB_FUNC_START sub_0802D354
sub_0802D354: @ 0x0802D354
	push {r4-r7,lr}
	ldr r0, _0802D3A8  @ =gUnknown_03000420
	ldrb r1, [r0, #3]
	lsl r1, r1, #11
	ldr r2, _0802D3AC  @ =gUnknown_0202D140
	add r1, r1, r2
	mov r3, #128
	lsl r3, r3, #3
	add r2, r1, r3
	mov r1, #0
	add r7, r0, #0
	mov r3, #0
_0802D36C:
	strh r3, [r2]
	add r0, r2, #0
	add r0, r0, #64
	strh r3, [r0]
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r2, r2, #2
	cmp r1, #5
	bls _0802D36C
	ldr r0, [r7, #20]
	cmp r0, #0
	beq _0802D422
	lsl r0, r0, #16
	asr r0, r0, #16
	mvn r1, r0
	asr r3, r1, #31
	mov r1, #128
	lsl r1, r1, #5
	and r3, r3, r1
	cmp r0, #0
	bge _0802D39A
	neg r0, r0
_0802D39A:
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r2, r0, #16
	cmp r2, #9
	bgt _0802D3B0
	mov r5, #1
	b _0802D3C2
_0802D3A8:
	.4byte gUnknown_03000420
_0802D3AC:
	.4byte gUnknown_0202D140
_0802D3B0:
	cmp r2, #99
	bgt _0802D3B8
	mov r5, #2
	b _0802D3C2
_0802D3B8:
	ldr r0, _0802D404  @ =0x000003E7
	mov r5, #4
	cmp r2, r0
	bgt _0802D3C2
	mov r5, #3
_0802D3C2:
	ldrb r0, [r7, #3]
	lsl r0, r0, #11
	ldr r4, _0802D408  @ =gUnknown_0202D148
	add r0, r0, r4
	mov r6, #128
	lsl r6, r6, #3
	add r0, r0, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	add r2, r5, #0
	bl sub_0802D228
	ldrb r1, [r7, #3]
	lsl r1, r1, #11
	mov r0, #28
	sub r0, r0, r5
	lsl r0, r0, #1
	sub r4, r4, #56
	add r0, r0, r4
	add r1, r1, r0
	add r2, r1, r6
	ldr r0, [r7, #20]
	cmp r0, #0
	ble _0802D414
	ldr r3, _0802D40C  @ =0x00001030
	add r0, r3, #0
	strh r0, [r2]
	mov r0, #136
	lsl r0, r0, #3
	add r1, r1, r0
	ldr r2, _0802D410  @ =0x00001050
	add r0, r2, #0
	b _0802D420
_0802D404:
	.4byte 0x000003E7
_0802D408:
	.4byte gUnknown_0202D148
_0802D40C:
	.4byte 0x00001030
_0802D410:
	.4byte 0x00001050
_0802D414:
	mov r0, #49
	strh r0, [r2]
	mov r3, #136
	lsl r3, r3, #3
	add r1, r1, r3
	mov r0, #81
_0802D420:
	strh r0, [r1]
_0802D422:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802D354

