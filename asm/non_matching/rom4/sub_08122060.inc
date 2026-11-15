	THUMB_FUNC_START sub_08122060
sub_08122060: @ 0x08122060
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _08122104  @ =gRam
	ldr r2, _08122108  @ =0x00000DC5
	add r0, r1, r2
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r3, _0812210C  @ =0x00000968
	add r3, r3, r1
	mov r12, r3
	strb r0, [r3]
	ldr r4, _08122110  @ =0x00000DD9
	add r0, r1, r4
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r3, _08122114  @ =0x00000969
	add r0, r1, r3
	strb r2, [r0]
	sub r4, r4, #10
	add r0, r1, r4
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r2, _08122118  @ =0x0000096C
	add r3, r1, r2
	strb r0, [r3]
	add r4, r4, #20
	add r0, r1, r4
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r4, _0812211C  @ =0x0000096D
	add r0, r1, r4
	strb r2, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r1, r2
	ldrh r2, [r0]
	add r6, r2, #0
	add r6, r6, #24
	sub r4, r4, #13
	add r0, r1, r4
	strh r6, [r0]
	ldr r4, _08122120  @ =0x000016C4
	add r0, r1, r4
	ldrh r7, [r0]
	add r4, r7, #0
	add r4, r4, #16
	ldr r0, _08122124  @ =0x00000964
	add r1, r1, r0
	strh r4, [r1]
	mov r1, r12
	ldrh r0, [r1]
	add r0, r0, #8
	strh r0, [r1]
	ldrh r1, [r3]
	add r1, r1, #8
	strh r1, [r3]
	lsl r0, r0, #16
	lsl r2, r2, #16
	asr r3, r0, #16
	cmp r0, r2
	blt _081220FC
	lsl r0, r6, #16
	asr r0, r0, #16
	cmp r3, r0
	bge _081220FC
	lsl r0, r1, #16
	lsl r1, r7, #16
	asr r2, r0, #16
	cmp r0, r1
	blt _081220FC
	lsl r0, r4, #16
	asr r0, r0, #16
	cmp r2, r0
	bge _081220FC
	add r0, r5, #0
	bl sub_08122128
_081220FC:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08122104:
	.4byte gRam
_08122108:
	.4byte 0x00000DC5
_0812210C:
	.4byte 0x00000968
_08122110:
	.4byte 0x00000DD9
_08122114:
	.4byte 0x00000969
_08122118:
	.4byte 0x0000096C
_0812211C:
	.4byte 0x0000096D
_08122120:
	.4byte 0x000016C4
_08122124:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08122060

