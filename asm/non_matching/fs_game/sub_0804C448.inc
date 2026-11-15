	THUMB_FUNC_START sub_0804C448
sub_0804C448: @ 0x0804C448
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #13
	bls _0804C45C
	b _0804C800
_0804C45C:
	lsl r1, r0, #2
	ldr r2, _0804C468  @ =0x0804C46C
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
	.byte 0x00
	.byte 0x00
_0804C468:
	.4byte 0x0804C46C
	.4byte _0804C4A4
	.4byte _0804C4FE
	.4byte _0804C512
	.4byte _0804C526
	.4byte _0804C53A
	.4byte _0804C54C
	.4byte _0804C55E
	.4byte _0804C572
	.4byte _0804C5D6
	.4byte _0804C5EA
	.4byte _0804C5FE
	.4byte _0804C69C
	.4byte _0804C740
	.4byte _0804C7E4
_0804C4A4:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C4B8
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #8
	bl sub_0802C3F0
	b _0804C4FC
_0804C4B8:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	add r1, r0, #0
	add r1, r1, #8
	cmp r1, #254
	bgt _0804C4EC
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r3, [r2]
	add r1, r3, #0
	add r1, r1, #8
	add r2, r0, #0
	add r0, r0, #69
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0804C4FC
_0804C4EC:
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0804C4FC:
	b _0804C800
_0804C4FE:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C510
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #1
	bl sub_0802C53C
_0804C510:
	b _0804C800
_0804C512:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C524
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #5
	bl sub_0802C53C
_0804C524:
	b _0804C800
_0804C526:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C538
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #20
	bl sub_0802C53C
_0804C538:
	b _0804C800
_0804C53A:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C54A
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl sub_0802C710
_0804C54A:
	b _0804C800
_0804C54C:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C55C
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl sub_0802C6AC
_0804C55C:
	b _0804C800
_0804C55E:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C570
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #50
	bl sub_0802C53C
_0804C570:
	b _0804C800
_0804C572:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C586
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #56
	bl sub_0802C3F0
	b _0804C5CA
_0804C586:
	ldr r1, [r7, #4]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	add r1, r0, #0
	add r1, r1, #56
	cmp r1, #254
	bgt _0804C5BA
	ldr r0, [r7, #4]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r2, r2, #69
	ldrb r3, [r2]
	add r1, r3, #0
	add r1, r1, #56
	add r2, r0, #0
	add r0, r0, #69
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0804C5CA
_0804C5BA:
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0804C5CA:
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #74
	bl 0x08003E10
	b _0804C800
_0804C5D6:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C5E8
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #100
	bl sub_0802C53C
_0804C5E8:
	b _0804C800
_0804C5EA:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C5FC
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #200
	bl sub_0802C53C
_0804C5FC:
	b _0804C800
_0804C5FE:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C696
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #122
	bl 0x08003E10
	ldr r0, _0804C698  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r1, r0, #30
	lsr r0, r1, #30
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #1
	bhi _0804C696
	ldr r0, _0804C698  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r2, r0, #30
	lsr r1, r2, #30
	ldr r0, _0804C698  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0804C698  @ =gUnknown_03006A30
	ldr r3, [r7, #4]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r3, r1, r2
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #62
	ldrb r1, [r2]
	lsl r2, r1, #30
	lsr r3, r2, #30
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #62
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804C696:
	b _0804C800
_0804C698:
	.4byte gUnknown_03006A30
_0804C69C:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C738
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #122
	bl 0x08003E10
	ldr r0, _0804C73C  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r1, r0, #28
	lsr r0, r1, #30
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #1
	bhi _0804C738
	ldr r0, _0804C73C  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r2, r0, #28
	lsr r1, r2, #30
	ldr r0, _0804C73C  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0804C73C  @ =gUnknown_03006A30
	ldr r3, [r7, #4]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r3, r1, r2
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #62
	ldrb r1, [r2]
	lsl r2, r1, #28
	lsr r3, r2, #30
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #62
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0]
	mov r3, #243
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804C738:
	b _0804C800
	.byte 0x00
	.byte 0x00
_0804C73C:
	.4byte gUnknown_03006A30
_0804C740:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C7DC
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #122
	bl 0x08003E10
	ldr r0, _0804C7E0  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r1, r0, #26
	lsr r0, r1, #30
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #1
	bhi _0804C7DC
	ldr r0, _0804C7E0  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #62
	ldrb r0, [r1]
	lsl r2, r0, #26
	lsr r1, r2, #30
	ldr r0, _0804C7E0  @ =gUnknown_03006A30
	ldr r2, [r7, #4]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0804C7E0  @ =gUnknown_03006A30
	ldr r3, [r7, #4]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r3, r1, r2
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #62
	ldrb r1, [r2]
	lsl r2, r1, #26
	lsr r3, r2, #30
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #62
	mov r2, #3
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0]
	mov r3, #207
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804C7DC:
	b _0804C800
	.byte 0x00
	.byte 0x00
_0804C7E0:
	.4byte gUnknown_03006A30
_0804C7E4:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	cmp r1, #1
	bne _0804C7FE
	mov r0, #149
	bl play_sound
	ldr r0, [r7, #4]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	mov r1, #80
	bl sub_0803D65C
_0804C7FE:
	b _0804C800
_0804C800:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804C448

