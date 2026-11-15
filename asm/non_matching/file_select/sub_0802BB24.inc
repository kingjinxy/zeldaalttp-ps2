	THUMB_FUNC_START sub_0802BB24
sub_0802BB24: @ 0x0802BB24
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r0, #0
	ldrb r0, [r4, #5]
	cmp r0, #0
	bne _0802BC0E
	ldr r3, _0802BBE4  @ =gUnknown_0813E4CC
	ldrb r1, [r4, #4]
	lsl r0, r1, #4
	add r0, r0, r3
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #20
	ldrh r2, [r4]
	add r2, r2, r0
	mov r10, r2
	ldr r7, _0802BBE8  @ =0x000003FF
	add r2, r7, #0
	mov r0, r10
	and r0, r0, r2
	mov r10, r0
	lsl r1, r1, #4
	add r1, r1, #128
	add r1, r1, r3
	ldrh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #20
	ldrh r1, [r4, #2]
	add r5, r0, r1
	and r5, r5, r2
	ldr r0, _0802BBEC  @ =gUnknown_03000450
	ldrh r1, [r0, #24]
	mov r2, r10
	sub r1, r2, r1
	asr r1, r1, #4
	ldrh r0, [r0, #26]
	sub r0, r5, r0
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r6, #0
	ldr r0, _0802BBF0  @ =gUnknown_0201F020
	ldr r7, _0802BBF4  @ =0x00002004
	add r0, r0, r7
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802BB9C
	ldr r0, _0802BBF8  @ =gUnknown_0200B320
	add r2, r7, #0
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802BB9E
_0802BB9C:
	mov r6, #2
_0802BB9E:
	mov r3, #0
	ldr r7, _0802BBFC  @ =gUnknown_08137B90
	mov r9, r7
	ldr r0, _0802BC00  @ =gUnknown_02021024
	mov r8, r0
	ldr r2, _0802BC04  @ =gUnknown_0200D324
	mov r12, r2
_0802BBAC:
	lsl r0, r3, #1
	add r0, r0, r9
	mov r7, #0
	ldrsh r0, [r0, r7]
	add r2, r1, r0
	mov r7, r8
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802BBCA
	mov r7, r12
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802BBD0
_0802BBCA:
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r6, r0, #16
_0802BBD0:
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #3
	bls _0802BBAC
	cmp r6, #1
	bls _0802BC08
	mov r0, #1
	strb r0, [r4, #5]
	b _0802BC0E
_0802BBE4:
	.4byte gUnknown_0813E4CC
_0802BBE8:
	.4byte 0x000003FF
_0802BBEC:
	.4byte gUnknown_03000450
_0802BBF0:
	.4byte gUnknown_0201F020
_0802BBF4:
	.4byte 0x00002004
_0802BBF8:
	.4byte gUnknown_0200B320
_0802BBFC:
	.4byte gUnknown_08137B90
_0802BC00:
	.4byte gUnknown_02021024
_0802BC04:
	.4byte gUnknown_0200D324
_0802BC08:
	mov r0, r10
	strh r0, [r4]
	strh r5, [r4, #2]
_0802BC0E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802BB24

