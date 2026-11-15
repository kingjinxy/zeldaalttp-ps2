	THUMB_FUNC_START sub_080EA860
sub_080EA860: @ 0x080EA860
	push {r4-r7,lr}
	sub sp, sp, #4
	mov r0, #16
	bl sub_080CF370
	ldr r2, _080EA8D0  @ =gRam
	ldr r1, _080EA8D4  @ =0x0000096C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #24
	and r0, r0, r1
	cmp r0, #0
	beq _080EA8C6
	mov r0, #3
	ldr r3, _080EA8D8  @ =0x00000964
	add r7, r2, r3
	ldr r6, _080EA8DC  @ =gUnknown_03003E74
	mov r1, #150
	lsl r1, r1, #4
	add r5, r2, r1
_080EA888:
	lsl r4, r0, #24
	asr r4, r4, #24
	ldrh r0, [r6]
	add r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080EA8E0  @ =gUnknown_08177D32
	lsl r3, r4, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r5]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080EA8E4  @ =gUnknown_08177D3A
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r3, [r7]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #0
	str r3, [sp]
	ldr r3, _080EA8E8  @ =0x00002213
	bl sub_080C6368
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r0, r4, #24
	cmp r4, #0
	bge _080EA888
_080EA8C6:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA8D0:
	.4byte gRam
_080EA8D4:
	.4byte 0x0000096C
_080EA8D8:
	.4byte 0x00000964
_080EA8DC:
	.4byte gUnknown_03003E74
_080EA8E0:
	.4byte gUnknown_08177D32
_080EA8E4:
	.4byte gUnknown_08177D3A
_080EA8E8:
	.4byte 0x00002213
	THUMB_FUNC_END sub_080EA860

