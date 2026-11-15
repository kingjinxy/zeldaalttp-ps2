	THUMB_FUNC_START sub_0800CA84
sub_0800CA84: @ 0x0800CA84
	push {r4,lr}
	ldr r2, _0800CAC4  @ =gUnknown_030004A0
	mov r12, r2
	ldrh r3, [r2]
	mov r4, #128
	lsl r4, r4, #6
	add r2, r4, #0
	orr r2, r2, r3
	mov r3, r12
	strh r2, [r3]
	mov r2, r12
	add r2, r2, #96
	strh r0, [r2]
	mov r0, r12
	add r0, r0, #98
	strh r1, [r0]
	mov r1, r12
	add r1, r1, #92
	mov r0, #160
	strh r0, [r1]
	ldr r1, _0800CAC8  @ =gUnknown_03000BC0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0800CACC  @ =0x04000040
	str r0, [r1, #8]
	ldr r0, _0800CAD0  @ =0xA2600001
	str r0, [r1, #12]
	bl sub_0800CA34
	pop {r4}
	pop {r0}
	bx r0
_0800CAC4:
	.4byte gUnknown_030004A0
_0800CAC8:
	.4byte gUnknown_03000BC0
_0800CACC:
	.4byte 0x04000040
_0800CAD0:
	.4byte 0xA2600001
	THUMB_FUNC_END sub_0800CA84

