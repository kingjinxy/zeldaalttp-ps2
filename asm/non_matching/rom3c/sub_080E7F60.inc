	THUMB_FUNC_START sub_080E7F60
sub_080E7F60: @ 0x080E7F60
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _080E801C  @ =gRam
	ldr r0, _080E8020  @ =0x00001132
	add r4, r2, r0
	add r4, r6, r4
	ldrb r5, [r4]
	mov r1, #9
	add r0, r5, #0
	orr r0, r0, r1
	strb r0, [r4]
	ldr r1, _080E8024  @ =0x00001012
	add r0, r2, r1
	add r7, r6, r0
	ldrb r1, [r7]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r7]
	add r0, r6, #0
	str r2, [sp]
	bl sub_080C4F98
	strb r5, [r4]
	lsl r0, r0, #24
	ldr r2, [sp]
	cmp r0, #0
	beq _080E8014
	ldr r3, _080E8028  @ =0x00000F52
	add r1, r2, r3
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080E802C  @ =0x00000FC2
	add r1, r2, r0
	add r1, r6, r1
	mov r0, #127
	strb r0, [r1]
	ldrb r1, [r7]
	and r0, r0, r1
	strb r0, [r7]
	ldr r1, _080E8030  @ =0x00000EE2
	add r0, r2, r1
	add r0, r6, r0
	ldr r3, _080E8034  @ =0x000016C4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080E8038  @ =0x00000F02
	add r0, r2, r1
	add r0, r6, r0
	add r3, r3, #1
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	ldrb r1, [r0]
	sub r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	orr r1, r1, r0
	add r1, r1, #8
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E803C  @ =0x00000ED2
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r2, r3
	add r0, r6, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080E8040  @ =0x000010E2
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #48
	strb r1, [r0]
	ldr r3, _080E8044  @ =0x00001172
	add r0, r2, r3
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
_080E8014:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080E801C:
	.4byte gRam
_080E8020:
	.4byte 0x00001132
_080E8024:
	.4byte 0x00001012
_080E8028:
	.4byte 0x00000F52
_080E802C:
	.4byte 0x00000FC2
_080E8030:
	.4byte 0x00000EE2
_080E8034:
	.4byte 0x000016C4
_080E8038:
	.4byte 0x00000F02
_080E803C:
	.4byte 0x00000ED2
_080E8040:
	.4byte 0x000010E2
_080E8044:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080E7F60

