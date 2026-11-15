	THUMB_FUNC_START sub_081320E4
sub_081320E4: @ 0x081320E4
	push {r4,r5,lr}
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r3, _0813214C  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r3, r0
	strh r1, [r2]
	mov r0, #31
	and r1, r1, r0
	cmp r1, #1
	bls _08132102
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
_08132102:
	ldr r5, _08132150  @ =0x00000964
	add r4, r3, r5
	strh r1, [r4]
	ldrh r2, [r2]
	mov r1, #248
	lsl r1, r1, #2
	and r1, r1, r2
	cmp r1, #32
	bls _0813211C
	add r0, r1, #0
	sub r0, r0, #32
	lsl r0, r0, #16
	lsr r1, r0, #16
_0813211C:
	ldr r5, _08132154  @ =0x00000968
	add r0, r3, r5
	add r3, r1, #0
	strh r1, [r0]
	mov r1, #248
	lsl r1, r1, #7
	and r1, r1, r2
	mov r0, #128
	lsl r0, r0, #5
	cmp r1, r0
	bls _0813213A
	ldr r2, _08132158  @ =0xFFFFFC00
	add r0, r1, r2
	lsl r0, r0, #16
	lsr r1, r0, #16
_0813213A:
	ldrh r0, [r4]
	orr r1, r1, r0
	orr r1, r1, r3
	lsl r0, r1, #16
	lsr r0, r0, #16
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0813214C:
	.4byte gRam
_08132150:
	.4byte 0x00000964
_08132154:
	.4byte 0x00000968
_08132158:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_081320E4

