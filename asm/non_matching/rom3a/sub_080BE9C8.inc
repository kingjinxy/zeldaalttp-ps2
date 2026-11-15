	THUMB_FUNC_START sub_080BE9C8
sub_080BE9C8: @ 0x080BE9C8
	push {r4,lr}
	ldr r4, _080BE9F4  @ =gRam
	ldr r1, _080BE9F8  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080BE9E0
	sub r1, r1, #20
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #91
	beq _080BE9EC
_080BE9E0:
	bl sub_080BDE8C
	ldr r0, _080BE9FC  @ =0x000016AC
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
_080BE9EC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BE9F4:
	.4byte gRam
_080BE9F8:
	.4byte 0x000009DA
_080BE9FC:
	.4byte 0x000016AC
	THUMB_FUNC_END sub_080BE9C8

