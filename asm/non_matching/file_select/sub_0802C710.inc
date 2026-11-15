	THUMB_FUNC_START sub_0802C710
sub_0802C710: @ 0x0802C710
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, _0802C740  @ =gUnknown_03006C80
	ldrb r1, [r4, #10]
	add r5, r0, #0
	add r5, r5, #104
	add r1, r1, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #143
	bl play_sound
	ldrb r1, [r4, #10]
	add r0, r1, r5
	ldrb r0, [r0]
	cmp r0, #3
	bgt _0802C744
	cmp r0, #2
	bge _0802C768
	cmp r0, #1
	beq _0802C74A
	b _0802C79C
	.byte 0x00
	.byte 0x00
_0802C740:
	.4byte gUnknown_03006C80
_0802C744:
	cmp r0, #4
	beq _0802C790
	b _0802C79C
_0802C74A:
	ldr r0, _0802C760  @ =0x00000301
	bl sub_0800D6A4
	ldr r1, _0802C764  @ =gUnknown_0201ED90
	ldrb r0, [r4, #10]
	add r0, r0, #1
	str r0, [r1, #8]
	mov r0, #250
	lsl r0, r0, #1
	str r0, [r1, #16]
	b _0802C79C
_0802C760:
	.4byte 0x00000301
_0802C764:
	.4byte gUnknown_0201ED90
_0802C768:
	ldr r0, _0802C788  @ =0x00000302
	bl sub_0800D6A4
	ldr r2, _0802C78C  @ =gUnknown_0201ED90
	ldrb r0, [r4, #10]
	add r0, r0, #1
	str r0, [r2, #8]
	ldrb r0, [r4, #10]
	add r0, r0, r5
	ldrb r1, [r0]
	mov r0, #4
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [r2, #12]
	b _0802C79C
_0802C788:
	.4byte 0x00000302
_0802C78C:
	.4byte gUnknown_0201ED90
_0802C790:
	ldr r0, _0802C7A4  @ =gUnknown_03000420
	lsl r1, r1, #1
	add r0, r0, #36
	add r1, r1, r0
	mov r0, #15
	strh r0, [r1]
_0802C79C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802C7A4:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802C710

