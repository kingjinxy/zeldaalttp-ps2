	THUMB_FUNC_START sub_080C4F6C
sub_080C4F6C: @ 0x080C4F6C
	push {lr}
	ldr r1, _080C4F84  @ =gRam
	ldr r2, _080C4F88  @ =0x0000180D
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C4F90
	ldr r0, _080C4F8C  @ =0x00000971
	add r1, r1, r0
	mov r0, #128
	strb r0, [r1]
	b _080C4F94
_080C4F84:
	.4byte gRam
_080C4F88:
	.4byte 0x0000180D
_080C4F8C:
	.4byte 0x00000971
_080C4F90:
	bl sub_080C44FC
_080C4F94:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C4F6C

