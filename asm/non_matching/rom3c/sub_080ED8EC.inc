	THUMB_FUNC_START sub_080ED8EC
sub_080ED8EC: @ 0x080ED8EC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r5, _080ED928  @ =gRam
	ldr r1, _080ED92C  @ =0x00000FF2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #162
	beq _080ED906
	bl sub_080CBB34
_080ED906:
	ldr r1, _080ED930  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	mov r1, #4
	strb r1, [r0]
	ldr r1, _080ED934  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r0, r4, #0
	mov r1, #255
	bl sub_080ED938
	pop {r4,r5}
	pop {r0}
	bx r0
_080ED928:
	.4byte gRam
_080ED92C:
	.4byte 0x00000FF2
_080ED930:
	.4byte 0x00000FA2
_080ED934:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080ED8EC

