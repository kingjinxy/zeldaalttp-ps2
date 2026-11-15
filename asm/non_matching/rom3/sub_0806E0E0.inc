	THUMB_FUNC_START sub_0806E0E0
sub_0806E0E0: @ 0x0806E0E0
	push {r4,r5,lr}
	ldr r2, _0806E140  @ =gRam
	ldr r1, _0806E144  @ =0x00000B0A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	bne _0806E13A
	ldr r2, _0806E148  @ =0x00000B34
	add r0, r4, r2
	ldrh r0, [r0]
	add r0, r0, #8
	mov r1, #127
	and r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	mov r3, #1
	neg r3, r3
	mov r5, #127
	mov r0, #0
	ldrsh r2, [r1, r0]
	mov r0, #194
	lsl r0, r0, #4
	add r1, r4, r0
_0806E118:
	add r1, r1, #2
	add r3, r3, #1
	ldrh r0, [r1]
	lsl r0, r0, #1
	and r0, r0, r5
	cmp r0, r2
	bne _0806E118
	lsl r0, r3, #1
	ldr r2, _0806E14C  @ =0x00000C22
	add r1, r4, r2
	add r0, r0, r1
	ldrh r0, [r0]
	lsl r0, r0, #1
	sub r0, r0, #8
	sub r2, r2, #238
	add r1, r4, r2
	strh r0, [r1]
_0806E13A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806E140:
	.4byte gRam
_0806E144:
	.4byte 0x00000B0A
_0806E148:
	.4byte 0x00000B34
_0806E14C:
	.4byte 0x00000C22
	THUMB_FUNC_END sub_0806E0E0

