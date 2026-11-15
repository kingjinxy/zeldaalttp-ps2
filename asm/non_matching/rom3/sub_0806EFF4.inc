	THUMB_FUNC_START sub_0806EFF4
sub_0806EFF4: @ 0x0806EFF4
	push {r4,r5,lr}
	ldr r4, _0806F06C  @ =gRam
	ldr r0, _0806F070  @ =0x00001645
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _0806F00A
	bl sub_08132448
	mov r0, #0
	strb r0, [r5]
_0806F00A:
	bl sub_080743D4
	bl sub_081311E0
	ldr r1, _0806F074  @ =0x00000CF8
	add r0, r4, r1
	ldrh r2, [r0]
	cmp r2, #0
	bne _0806F066
	ldr r0, _0806F078  @ =0x000009AC
	add r1, r4, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _0806F07C  @ =0x000009AD
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #59
	add r0, r4, r1
	strh r2, [r0]
	ldr r2, _0806F080  @ =0x00000A42
	add r0, r4, r2
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0806F084  @ =0x00001718
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #28
	beq _0806F04E
	cmp r0, #23
	beq _0806F04E
	mov r0, #0
	strb r0, [r1]
_0806F04E:
	ldr r0, _0806F06C  @ =gRam
	ldr r1, _0806F088  @ =0x000017D4
	add r2, r0, r1
	mov r1, #0
	strb r1, [r2]
	ldr r2, _0806F08C  @ =0x00000CB2
	add r0, r0, r2
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806F066
	bl sub_08133600
_0806F066:
	pop {r4,r5}
	pop {r0}
	bx r0
_0806F06C:
	.4byte gRam
_0806F070:
	.4byte 0x00001645
_0806F074:
	.4byte 0x00000CF8
_0806F078:
	.4byte 0x000009AC
_0806F07C:
	.4byte 0x000009AD
_0806F080:
	.4byte 0x00000A42
_0806F084:
	.4byte 0x00001718
_0806F088:
	.4byte 0x000017D4
_0806F08C:
	.4byte 0x00000CB2
	THUMB_FUNC_END sub_0806EFF4

