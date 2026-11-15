	THUMB_FUNC_START sub_080D60E8
sub_080D60E8: @ 0x080D60E8
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r7, r1, #0
	ldr r6, _080D6198  @ =gRam
	ldr r2, _080D619C  @ =0x00000F92
	add r0, r6, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #10
	beq _080D618E
	ldr r4, _080D61A0  @ =0x00000979
	add r3, r6, r4
	mov r5, #0
	strb r5, [r3]
	sub r2, r2, #32
	add r0, r6, r2
	add r0, r1, r0
	ldrb r2, [r0]
	cmp r2, #128
	beq _080D618E
	ldr r1, _080D61A4  @ =0x00000978
	add r4, r6, r1
	strb r2, [r4]
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D612A
	mov r0, #1
	neg r0, r0
	strb r0, [r3]
_080D612A:
	ldr r2, _080D61A8  @ =0x00000F82
	add r0, r6, r2
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r1, _080D61AC  @ =0x00000974
	add r3, r6, r1
	strb r0, [r3]
	ldr r2, _080D61B0  @ =0x00000975
	add r0, r6, r2
	strb r5, [r0]
	ldr r0, _080D61B4  @ =gUnknown_03003E74
	ldrh r0, [r0]
	sub r1, r1, #20
	add r2, r6, r1
	ldrh r1, [r4]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080D61B8  @ =0x00000964
	add r2, r6, r4
	ldrh r2, [r2]
	ldrh r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r5, _080D61BC  @ =gUnknown_0817531C
	ldr r4, _080D61C0  @ =0x00001082
	add r3, r6, r4
	add r3, r7, r3
	ldrb r4, [r3]
	add r5, r4, r5
	ldrb r3, [r5]
	ldr r5, _080D61C4  @ =gUnknown_08175320
	add r4, r4, r5
	ldrb r4, [r4]
	ldr r7, _080D61C8  @ =0x00000969
	add r5, r6, r7
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
_080D618E:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6198:
	.4byte gRam
_080D619C:
	.4byte 0x00000F92
_080D61A0:
	.4byte 0x00000979
_080D61A4:
	.4byte 0x00000978
_080D61A8:
	.4byte 0x00000F82
_080D61AC:
	.4byte 0x00000974
_080D61B0:
	.4byte 0x00000975
_080D61B4:
	.4byte gUnknown_03003E74
_080D61B8:
	.4byte 0x00000964
_080D61BC:
	.4byte gUnknown_0817531C
_080D61C0:
	.4byte 0x00001082
_080D61C4:
	.4byte gUnknown_08175320
_080D61C8:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080D60E8

