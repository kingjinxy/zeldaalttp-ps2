	THUMB_FUNC_START sub_08078804
sub_08078804: @ 0x08078804
	push {lr}
	bl sub_080774C8
	ldr r0, _08078830  @ =gRam
	ldr r1, _08078834  @ =0x000009C6
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _08078838  @ =gUnknown_02002DC0
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r2, _0807883C  @ =gUnknown_0814C8E8
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_0813084C
	bl sub_08130978
	bl sub_080763E4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08078830:
	.4byte gRam
_08078834:
	.4byte 0x000009C6
_08078838:
	.4byte gUnknown_02002DC0
_0807883C:
	.4byte gUnknown_0814C8E8
	THUMB_FUNC_END sub_08078804

