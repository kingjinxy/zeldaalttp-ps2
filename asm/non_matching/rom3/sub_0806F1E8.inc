	THUMB_FUNC_START sub_0806F1E8
sub_0806F1E8: @ 0x0806F1E8
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r3, _0806F2B0  @ =gRam
	ldr r1, _0806F2B4  @ =0x000009DC
	add r0, r3, r1
	ldrh r5, [r0]
	mov r1, #15
	add r2, r1, #0
	and r2, r2, r5
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r3
	mov r8, r4
	ldr r4, _0806F2B8  @ =0x000009DA
	add r0, r3, r4
	ldrh r4, [r0]
	and r1, r1, r4
	sub r1, r1, r2
	lsl r1, r1, #9
	ldr r0, _0806F2BC  @ =0x00000964
	add r6, r3, r0
	ldr r0, _0806F2C0  @ =0x000016C4
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806F2C4  @ =0x00000952
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r0, #184
	lsl r0, r0, #4
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806F2C8  @ =0x00000B82
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806F2CC  @ =0x00000B7C
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806F2D0  @ =0x00000B7E
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r1, #240
	add r0, r1, #0
	and r0, r0, r5
	lsr r0, r0, #3
	and r1, r1, r4
	lsr r1, r1, #3
	sub r1, r1, r0
	mov r4, r8
	strh r1, [r4]
	lsl r1, r1, #8
	strh r1, [r6]
	mov r0, #182
	lsl r0, r0, #5
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r4, _0806F2D4  @ =0x00000958
	add r2, r3, r4
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806F2D8  @ =0x00000B78
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r4, _0806F2DC  @ =0x00000B7A
	add r2, r3, r4
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806F2E0  @ =0x00000B74
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	sub r4, r4, #4
	add r3, r3, r4
	ldrh r0, [r3]
	add r0, r0, r1
	strh r0, [r3]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_0806F2B0:
	.4byte gRam
_0806F2B4:
	.4byte 0x000009DC
_0806F2B8:
	.4byte 0x000009DA
_0806F2BC:
	.4byte 0x00000964
_0806F2C0:
	.4byte 0x000016C4
_0806F2C4:
	.4byte 0x00000952
_0806F2C8:
	.4byte 0x00000B82
_0806F2CC:
	.4byte 0x00000B7C
_0806F2D0:
	.4byte 0x00000B7E
_0806F2D4:
	.4byte 0x00000958
_0806F2D8:
	.4byte 0x00000B78
_0806F2DC:
	.4byte 0x00000B7A
_0806F2E0:
	.4byte 0x00000B74
	THUMB_FUNC_END sub_0806F1E8

