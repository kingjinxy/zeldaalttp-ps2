	THUMB_FUNC_START sub_0806D8E4
sub_0806D8E4: @ 0x0806D8E4
	push {r4,lr}
	ldr r1, _0806D928  @ =gRam
	ldr r2, _0806D92C  @ =0x000016C4
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _0806D930  @ =0x00001608
	add r0, r1, r3
	strb r2, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	ldrb r2, [r0]
	add r3, r3, #4
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _0806D934  @ =0x000009E8
	add r4, r1, r0
	ldrh r0, [r4]
	cmp r0, #3
	bls _0806D910
	bl sub_08089E94
_0806D910:
	bl sub_08096F30
	ldr r0, _0806D938  @ =gUnknown_0814CB98
	ldrh r1, [r4]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
	pop {r4}
	pop {r0}
	bx r0
_0806D928:
	.4byte gRam
_0806D92C:
	.4byte 0x000016C4
_0806D930:
	.4byte 0x00001608
_0806D934:
	.4byte 0x000009E8
_0806D938:
	.4byte gUnknown_0814CB98
	THUMB_FUNC_END sub_0806D8E4

