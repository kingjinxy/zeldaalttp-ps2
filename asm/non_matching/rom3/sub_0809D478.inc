	THUMB_FUNC_START sub_0809D478
sub_0809D478: @ 0x0809D478
	push {r4,r5,lr}
	ldr r4, _0809D564  @ =gRam
	ldr r1, _0809D568  @ =0x0000178A
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0809D56C  @ =0x0000180C
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0809D570  @ =0x00000A58
	add r0, r4, r2
	mov r5, #0
	strh r1, [r0]
	mov r1, #191
	lsl r1, r1, #5
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809D574  @ =0x00001796
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #73
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #174
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0809D578  @ =0x000016E8
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809D57C  @ =0x00001791
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809D580  @ =0x00001792
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #119
	add r0, r4, r1
	strb r5, [r0]
	sub r2, r2, #152
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #184
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #229
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #102
	add r0, r4, r1
	strb r5, [r0]
	bl sub_08092B0C
	ldr r0, _0809D584  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809D588  @ =0x000016C9
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809D58C  @ =0x000017F1
	add r3, r4, r2
	ldrb r0, [r3]
	cmp r0, #0
	beq _0809D5AC
	ldr r0, _0809D590  @ =0x00001710
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _0809D524
	add r1, r1, #165
	add r0, r4, r1
	mov r1, #32
	strb r1, [r0]
	ldr r1, _0809D594  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	strb r5, [r2]
	strb r5, [r3]
_0809D524:
	bl sub_08092BF4
	ldr r2, _0809D594  @ =0x0000180D
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0809D598  @ =0x00001789
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809D59C  @ =0x000016EB
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0809D5A0  @ =0x000016D4
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0809D5A4  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #17
	bl sub_0809E49C
	ldr r2, _0809D5A8  @ =0x00001718
	add r1, r4, r2
	mov r0, #7
	strb r0, [r1]
	bl sub_08098D20
	b _0809D5BE
_0809D564:
	.4byte gRam
_0809D568:
	.4byte 0x0000178A
_0809D56C:
	.4byte 0x0000180C
_0809D570:
	.4byte 0x00000A58
_0809D574:
	.4byte 0x00001796
_0809D578:
	.4byte 0x000016E8
_0809D57C:
	.4byte 0x00001791
_0809D580:
	.4byte 0x00001792
_0809D584:
	.4byte 0x00001705
_0809D588:
	.4byte 0x000016C9
_0809D58C:
	.4byte 0x000017F1
_0809D590:
	.4byte 0x00001710
_0809D594:
	.4byte 0x0000180D
_0809D598:
	.4byte 0x00001789
_0809D59C:
	.4byte 0x000016EB
_0809D5A0:
	.4byte 0x000016D4
_0809D5A4:
	.4byte 0x00001727
_0809D5A8:
	.4byte 0x00001718
_0809D5AC:
	ldr r1, _0809D5C4  @ =0x0000172B
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0809D5C8  @ =0x00001718
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	bl sub_08099C90
_0809D5BE:
	pop {r4,r5}
	pop {r0}
	bx r0
_0809D5C4:
	.4byte 0x0000172B
_0809D5C8:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809D478

