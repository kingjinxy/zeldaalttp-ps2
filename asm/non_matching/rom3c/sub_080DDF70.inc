	THUMB_FUNC_START sub_080DDF70
sub_080DDF70: @ 0x080DDF70
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080DDFC4  @ =gRam
	ldr r1, _080DDFC8  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080DDFB0
	ldr r1, _080DDFCC  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	bne _080DDFA2
	ldr r1, _080DDFD0  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #64
	eor r1, r1, r2
	strb r1, [r0]
_080DDFA2:
	bl GetRandomInt
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DDFB0
	mov r0, #32
	strb r0, [r5]
_080DDFB0:
	mov r1, #166
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080DDFC4:
	.4byte gRam
_080DDFC8:
	.4byte 0x00000FC2
_080DDFCC:
	.4byte 0x00000996
_080DDFD0:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080DDF70

