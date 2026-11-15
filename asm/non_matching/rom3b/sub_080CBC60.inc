	THUMB_FUNC_START sub_080CBC60
sub_080CBC60: @ 0x080CBC60
	push {lr}
	ldr r1, _080CBC78  @ =gRam
	ldr r2, _080CBC7C  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CBC80
	bl sub_080CA988
	bl sub_080CA9F8
	b _080CBCA8
_080CBC78:
	.4byte gRam
_080CBC7C:
	.4byte 0x000009AD
_080CBC80:
	ldr r2, _080CBC94  @ =0x000015FB
	add r0, r1, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080CBC98
	bl sub_080CA9F8
	b _080CBC9C
_080CBC94:
	.4byte 0x000015FB
_080CBC98:
	bl sub_080CA988
_080CBC9C:
	ldr r1, _080CBCAC  @ =gRam
	ldr r0, _080CBCB0  @ =0x000015FB
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080CBCA8:
	pop {r0}
	bx r0
_080CBCAC:
	.4byte gRam
_080CBCB0:
	.4byte 0x000015FB
	THUMB_FUNC_END sub_080CBC60

