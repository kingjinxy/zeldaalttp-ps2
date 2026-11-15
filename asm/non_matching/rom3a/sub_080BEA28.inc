	THUMB_FUNC_START sub_080BEA28
sub_080BEA28: @ 0x080BEA28
	push {lr}
	add r2, r0, #0
	cmp r2, #32
	beq _080BEA56
	ldr r0, _080BEA5C  @ =gRam
	ldr r3, _080BEA60  @ =0x000009AC
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #26
	beq _080BEA56
	lsl r0, r2, #1
	ldr r3, _080BEA64  @ =gUnknown_020023FC
	add r2, r0, r3
	ldrh r0, [r2]
	add r0, r0, r1
	strh r0, [r2]
	lsl r0, r0, #16
	ldr r1, _080BEA68  @ =0x270E0000
	cmp r0, r1
	bls _080BEA56
	ldr r1, _080BEA6C  @ =0x0000270F
	add r0, r1, #0
	strh r0, [r2]
_080BEA56:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BEA5C:
	.4byte gRam
_080BEA60:
	.4byte 0x000009AC
_080BEA64:
	.4byte gUnknown_020023FC
_080BEA68:
	.4byte 0x270E0000
_080BEA6C:
	.4byte 0x0000270F
	THUMB_FUNC_END sub_080BEA28

