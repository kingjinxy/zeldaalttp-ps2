	THUMB_FUNC_START sub_080AD05C
sub_080AD05C: @ 0x080AD05C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080AD080  @ =gRam
	ldr r3, _080AD084  @ =0x00000E29
	add r0, r1, r3
	add r0, r2, r0
	ldrb r0, [r0]
	sub r0, r0, #52
	add r3, r1, #0
	cmp r0, #19
	bhi _080AD0DC
	lsl r0, r0, #2
	ldr r1, _080AD088  @ =0x080AD08C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_080AD080:
	.4byte gRam
_080AD084:
	.4byte 0x00000E29
_080AD088:
	.4byte _080AD088+0x4
	.4byte _080AD11C
	.4byte _080AD11C
	.4byte _080AD11C
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD10C
	.4byte _080AD10C
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0DC
	.4byte _080AD0E0
	.4byte _080AD0E0
_080AD0DC:
	mov r0, #0
	b _080AD150
_080AD0E0:
	mov r1, #2
	ldr r4, _080AD104  @ =0x00000E29
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #71
	beq _080AD12A
	mov r0, #150
	lsl r0, r0, #4
	add r1, r3, r0
	mov r0, #44
	strb r0, [r1]
	ldr r2, _080AD108  @ =0x00000961
	add r1, r3, r2
	mov r0, #1
	strb r0, [r1]
	b _080AD140
	.byte 0x00
	.byte 0x00
_080AD104:
	.4byte 0x00000E29
_080AD108:
	.4byte 0x00000961
_080AD10C:
	ldr r4, _080AD118  @ =0x00000E29
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r0, #195
	b _080AD126
_080AD118:
	.4byte 0x00000E29
_080AD11C:
	ldr r1, _080AD158  @ =0x00000E29
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	sub r0, r0, #52
_080AD126:
	lsl r0, r0, #24
	lsr r1, r0, #24
_080AD12A:
	ldr r0, _080AD15C  @ =gUnknown_0816E525
	add r0, r1, r0
	ldrb r1, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	mov r2, #0
	strb r1, [r0]
	ldr r4, _080AD160  @ =0x00000961
	add r0, r3, r4
	strb r2, [r0]
_080AD140:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	bl sub_080AA83C
	mov r0, #1
_080AD150:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080AD158:
	.4byte 0x00000E29
_080AD15C:
	.4byte gUnknown_0816E525
_080AD160:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080AD05C

