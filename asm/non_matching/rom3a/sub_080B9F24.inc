	THUMB_FUNC_START sub_080B9F24
sub_080B9F24: @ 0x080B9F24
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	ldr r1, _080B9FA0  @ =gUnknown_08170F1C
	lsr r0, r0, #25
	add r0, r0, r1
	ldrb r5, [r0]
	ldr r1, _080B9FA4  @ =gRam
	ldr r2, _080B9FA8  @ =0x00000A02
	add r0, r1, r2
	ldrb r0, [r0]
	mov r8, r0
	add r2, r2, #1
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	mov r2, r8
	orr r2, r2, r0
	mov r8, r2
	add r7, r1, #0
	ldr r0, _080B9FAC  @ =0x00000F52
	add r0, r0, r7
	mov r10, r0
	ldr r1, _080B9FB0  @ =0x00001122
	add r1, r1, r7
	mov r9, r1
_080B9F5E:
	ldr r2, _080B9FB4  @ =0x000015DC
	add r0, r7, r2
	strb r5, [r0]
	lsl r5, r5, #24
	asr r4, r5, #24
	ldr r0, _080B9FB8  @ =0x00000FF2
	add r1, r7, r0
	add r1, r4, r1
	ldr r0, _080B9FBC  @ =gUnknown_08170FB4
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080B9FC0  @ =gUnknown_08170FB7
	add r0, r4, r0
	ldrb r0, [r0]
	bl sub_080CF370
	mov r2, r10
	add r1, r4, r2
	ldr r0, _080B9FC4  @ =gUnknown_08170FBA
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r1]
	lsr r6, r5, #24
	ldr r0, _080B9FC8  @ =0x0000026F
	cmp r8, r0
	bne _080B9FCC
	mov r0, #87
	mov r1, #0
	bl sub_0812A324
	b _080B9FD8
	.byte 0x00
	.byte 0x00
_080B9FA0:
	.4byte gUnknown_08170F1C
_080B9FA4:
	.4byte gRam
_080B9FA8:
	.4byte 0x00000A02
_080B9FAC:
	.4byte 0x00000F52
_080B9FB0:
	.4byte 0x00001122
_080B9FB4:
	.4byte 0x000015DC
_080B9FB8:
	.4byte 0x00000FF2
_080B9FBC:
	.4byte gUnknown_08170FB4
_080B9FC0:
	.4byte gUnknown_08170FB7
_080B9FC4:
	.4byte gUnknown_08170FBA
_080B9FC8:
	.4byte 0x0000026F
_080B9FCC:
	ldr r0, _080BA018  @ =0x0000026E
	cmp r8, r0
	bls _080B9FD8
	add r0, r6, #3
	lsl r0, r0, #24
	lsr r6, r0, #24
_080B9FD8:
	asr r4, r5, #24
	ldr r0, _080BA01C  @ =0x00000F92
	add r1, r7, r0
	add r1, r4, r1
	ldr r0, _080BA020  @ =gUnknown_08170FBD
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r2, r9
	add r1, r4, r2
	mov r0, #51
	strb r0, [r1]
	lsr r5, r5, #24
	add r0, r5, #0
	bl sub_080C1F70
	add r0, r5, #0
	bl SpriteActive_MainLong
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r5, r4, #24
	cmp r4, #0
	bge _080B9F5E
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BA018:
	.4byte 0x0000026E
_080BA01C:
	.4byte 0x00000F92
_080BA020:
	.4byte gUnknown_08170FBD
	THUMB_FUNC_END sub_080B9F24

