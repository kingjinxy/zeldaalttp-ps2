	THUMB_FUNC_START sub_0807D288
sub_0807D288: @ 0x0807D288
	push {r4-r6,lr}
	ldr r5, _0807D2D8  @ =gRam
	ldr r1, _0807D2DC  @ =0x00000AD4
	add r3, r5, r1
	ldrh r1, [r3]
	lsl r1, r1, #1
	ldr r4, _0807D2E0  @ =0x0000199C
	add r2, r5, r4
	add r1, r1, r2
	mov r6, #151
	lsl r6, r6, #4
	add r4, r5, r6
	ldrh r2, [r4]
	strh r2, [r1]
	ldrh r1, [r3]
	lsl r1, r1, #1
	ldr r6, _0807D2E4  @ =0x0000197C
	add r2, r5, r6
	add r1, r1, r2
	sub r0, r0, #1
	strh r0, [r1]
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	ldrh r1, [r4]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0807D2D2
	ldr r0, _0807D2E8  @ =0x00000B02
	add r2, r5, r0
	ldrh r0, [r2]
	cmp r0, #2
	bhi _0807D2D2
	add r0, r0, #1
	strh r0, [r2]
_0807D2D2:
	pop {r4-r6}
	pop {r0}
	bx r0
_0807D2D8:
	.4byte gRam
_0807D2DC:
	.4byte 0x00000AD4
_0807D2E0:
	.4byte 0x0000199C
_0807D2E4:
	.4byte 0x0000197C
_0807D2E8:
	.4byte 0x00000B02
	THUMB_FUNC_END sub_0807D288

