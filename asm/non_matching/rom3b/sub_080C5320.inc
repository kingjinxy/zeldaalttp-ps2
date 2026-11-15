	THUMB_FUNC_START sub_080C5320
sub_080C5320: @ 0x080C5320
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r2, #0
	ldr r1, _080C535C  @ =gRam
	ldr r4, _080C5360  @ =0x00000EC5
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #12
	bhi _080C534E
	mov r2, #20
	ldr r4, _080C5364  @ =0x00000FF2
	add r0, r1, r4
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #9
	beq _080C534E
	mov r2, #15
	cmp r0, #83
	beq _080C534C
	cmp r0, #24
	bne _080C534E
_080C534C:
	mov r2, #11
_080C534E:
	ldr r4, _080C5368  @ =0x00001072
	add r0, r1, r4
	add r0, r3, r0
	strb r2, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080C535C:
	.4byte gRam
_080C5360:
	.4byte 0x00000EC5
_080C5364:
	.4byte 0x00000FF2
_080C5368:
	.4byte 0x00001072
	THUMB_FUNC_END sub_080C5320

